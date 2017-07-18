"""Pentomino puzzle solver - based on Bruce Hoyt's clever Forth version

This program uses a brute force solution using code generation to solve all
possible tilings of the 12 free pentominoes on a 6x10 board (there are 2339
of them). Read more here: http://benhoyt.com/writings/python-pentomino/

Released under a permissive MIT license (see LICENSE.txt).
"""

import argparse
import sys
import time

ORIENTATIONS = (
    'ABCDEiIlJyKyLl.IHnJpKuQv.JKpRt.KLnSv..IHGnJpPwQf.JKpQpRp.QPzRuYl..'
    'JKLnRfSw.RQuSzZl...IHGFlJyOzPfQt.JKyPfRf.POwQpXn.QRfYy..JKCuLlQtRf'
    'Sz.QPfRpYy.RSwZn..QPOvRtXnYy.RSvYyZn.YXlZlai....'
)

NUM_PIECES = 12
WIDTH = 6
HEIGHT = 10
TOTAL_WIDTH = WIDTH + 2
QUIET = False

_num_solutions = 0
_num_tries = 0


def make_board():
    """Create empty board array. Put edge chars around the edges, both for
    display and so the solver sees those edge square as filled.
    """
    board = []
    board.extend('+' + '-' * WIDTH + '+')
    for i in range(HEIGHT):
        board.append('|')
        board.extend([None] * WIDTH)
        board.append('|')
    board.extend('+' + '-' * WIDTH + '+')
    return board


def display_solution(board):
    """Display the current state of the board (and count a solution)."""
    global _num_solutions
    _num_solutions += 1
    if QUIET:
        return
    print('Solution {}:'.format(_num_solutions))
    for i in range(0, len(board), TOTAL_WIDTH):
        print(''.join(c or ' ' for c in board[i:i + TOTAL_WIDTH]))
    print('')


def generate_solve():
    """Generate Python source string for the recursive solve() function."""
    stack = []
    lines = ["""
def solve(board, pos, used):
    global _num_tries

    if len(used) == NUM_PIECES:
        # We've used/placed all the pieces, show solution!
        display_solution(board)
        return

    # Find next empty square on board
    while board[pos]:
        pos += 1
"""]
    add = lines.append
    indent = ' ' * 4
    for c in ORIENTATIONS:
        if c == '.':
            indent = indent[:-4]
            stack.pop()
        elif c > 'a':
            # Found a piece that fits: if it's not yet used, place it and
            # solve rest of board recursively
            add(indent + 'if {!r} not in used:'.format(c))
            add(indent + '    _num_tries += 1')
            add(indent + '    used.add({!r})'.format(c))
            for offset in stack:
                add(indent + '    board[pos + {}] = {!r}'.format(offset, c))
            add(indent + '    solve(board, pos, used)')
            for offset in stack:
                add(indent + '    board[pos + {}] = None'.format(offset))
            add(indent + '    used.remove({!r})'.format(c))
            indent = indent[:-4]
            stack.pop()
        else:
            i = ord(c) - ord('A') + 3
            x, y = i % 8, i // 8
            offset = y * TOTAL_WIDTH + x - 3
            add(indent + 'if not board[pos + {}]:'.format(offset))
            indent += ' ' * 4
            stack.append(offset)
    return '\n'.join(lines)


def place_x(board, x, y, value):
    """Place the 'x' piece at given location (or lift it if value is None)."""
    pos = TOTAL_WIDTH * y + x
    board[pos] = value
    board[pos + TOTAL_WIDTH] = value
    board[pos + TOTAL_WIDTH * 2] = value
    board[pos + TOTAL_WIDTH - 1] = value
    board[pos + TOTAL_WIDTH + 1] = value


def solve_with_x_at(board, x, y):
    """Solve the board with 'x' piece at given location."""
    place_x(board, x, y, 'x')
    solve(board, TOTAL_WIDTH + 1, {'x'})
    place_x(board, x, y, None)


def solve_6x10(board):
    """Placing 'x' manually at these positions is more efficient and avoids
    mirror image and rotated solutions.
    """
    solve_with_x_at(board, 3, 1)
    solve_with_x_at(board, 2, 2)
    solve_with_x_at(board, 3, 2)
    solve_with_x_at(board, 2, 3)
    solve_with_x_at(board, 3, 3)
    solve_with_x_at(board, 2, 4)
    solve_with_x_at(board, 3, 4)


def solve_4x15(board):
    solve_with_x_at(board, 2, 2)
    solve_with_x_at(board, 2, 3)
    solve_with_x_at(board, 2, 4)
    solve_with_x_at(board, 2, 5)
    solve_with_x_at(board, 2, 6)
    solve_with_x_at(board, 2, 7)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(
            description='Solve a 6x10 or 4x15 pentomino puzzle')
    parser.add_argument('-q', '--quiet', action='store_true',
                        help='quiet mode (only display totals at the end')
    parser.add_argument('-s', '--source', action='store_true',
                        help="output solve() source instead of solving")
    parser.add_argument('-z', '--size', default='6x10', choices=['6x10', '4x15'],
                        help='size of board, default %(default)s')
    args = parser.parse_args()

    QUIET = bool(args.quiet)
    if args.size == '4x15':
        WIDTH = 4
        HEIGHT = 15
        TOTAL_WIDTH = WIDTH + 2
        solve_all = solve_4x15
    else:
        solve_all = solve_6x10

    solve_source = generate_solve()
    if args.source:
        print(solve_source)
        sys.exit()

    exec(solve_source)  # define global solve() function
    board = make_board()
    start_time = time.time()
    solve_all(board)
    elapsed = time.time() - start_time
    print('Found {} solutions and tried {} pieces in {:.03f}s'.format(
            _num_solutions, _num_tries, elapsed))
