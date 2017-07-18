
def solve(board, pos, used):
    global _num_tries

    if len(used) == NUM_PIECES:
        # We've used/placed all the pieces, show solution!
        display_solution(board)
        return

    # Find next empty square on board
    while board[pos]:
        pos += 1

    if not board[pos + 0]:
        if not board[pos + 1]:
            if not board[pos + 2]:
                if not board[pos + 3]:
                    if not board[pos + 4]:
                        if 'i' not in used:
                            _num_tries += 1
                            used.add('i')
                            board[pos + 0] = 'i'
                            board[pos + 1] = 'i'
                            board[pos + 2] = 'i'
                            board[pos + 3] = 'i'
                            board[pos + 4] = 'i'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 3] = None
                            board[pos + 4] = None
                            used.remove('i')
                    if not board[pos + 8]:
                        if 'l' not in used:
                            _num_tries += 1
                            used.add('l')
                            board[pos + 0] = 'l'
                            board[pos + 1] = 'l'
                            board[pos + 2] = 'l'
                            board[pos + 3] = 'l'
                            board[pos + 8] = 'l'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 3] = None
                            board[pos + 8] = None
                            used.remove('l')
                    if not board[pos + 9]:
                        if 'y' not in used:
                            _num_tries += 1
                            used.add('y')
                            board[pos + 0] = 'y'
                            board[pos + 1] = 'y'
                            board[pos + 2] = 'y'
                            board[pos + 3] = 'y'
                            board[pos + 9] = 'y'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 3] = None
                            board[pos + 9] = None
                            used.remove('y')
                    if not board[pos + 10]:
                        if 'y' not in used:
                            _num_tries += 1
                            used.add('y')
                            board[pos + 0] = 'y'
                            board[pos + 1] = 'y'
                            board[pos + 2] = 'y'
                            board[pos + 3] = 'y'
                            board[pos + 10] = 'y'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 3] = None
                            board[pos + 10] = None
                            used.remove('y')
                    if not board[pos + 11]:
                        if 'l' not in used:
                            _num_tries += 1
                            used.add('l')
                            board[pos + 0] = 'l'
                            board[pos + 1] = 'l'
                            board[pos + 2] = 'l'
                            board[pos + 3] = 'l'
                            board[pos + 11] = 'l'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 3] = None
                            board[pos + 11] = None
                            used.remove('l')
                if not board[pos + 8]:
                    if not board[pos + 7]:
                        if 'n' not in used:
                            _num_tries += 1
                            used.add('n')
                            board[pos + 0] = 'n'
                            board[pos + 1] = 'n'
                            board[pos + 2] = 'n'
                            board[pos + 8] = 'n'
                            board[pos + 7] = 'n'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            used.remove('n')
                    if not board[pos + 9]:
                        if 'p' not in used:
                            _num_tries += 1
                            used.add('p')
                            board[pos + 0] = 'p'
                            board[pos + 1] = 'p'
                            board[pos + 2] = 'p'
                            board[pos + 8] = 'p'
                            board[pos + 9] = 'p'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            used.remove('p')
                    if not board[pos + 10]:
                        if 'u' not in used:
                            _num_tries += 1
                            used.add('u')
                            board[pos + 0] = 'u'
                            board[pos + 1] = 'u'
                            board[pos + 2] = 'u'
                            board[pos + 8] = 'u'
                            board[pos + 10] = 'u'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 8] = None
                            board[pos + 10] = None
                            used.remove('u')
                    if not board[pos + 16]:
                        if 'v' not in used:
                            _num_tries += 1
                            used.add('v')
                            board[pos + 0] = 'v'
                            board[pos + 1] = 'v'
                            board[pos + 2] = 'v'
                            board[pos + 8] = 'v'
                            board[pos + 16] = 'v'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            used.remove('v')
                if not board[pos + 9]:
                    if not board[pos + 10]:
                        if 'p' not in used:
                            _num_tries += 1
                            used.add('p')
                            board[pos + 0] = 'p'
                            board[pos + 1] = 'p'
                            board[pos + 2] = 'p'
                            board[pos + 9] = 'p'
                            board[pos + 10] = 'p'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            used.remove('p')
                    if not board[pos + 17]:
                        if 't' not in used:
                            _num_tries += 1
                            used.add('t')
                            board[pos + 0] = 't'
                            board[pos + 1] = 't'
                            board[pos + 2] = 't'
                            board[pos + 9] = 't'
                            board[pos + 17] = 't'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 9] = None
                            board[pos + 17] = None
                            used.remove('t')
                if not board[pos + 10]:
                    if not board[pos + 11]:
                        if 'n' not in used:
                            _num_tries += 1
                            used.add('n')
                            board[pos + 0] = 'n'
                            board[pos + 1] = 'n'
                            board[pos + 2] = 'n'
                            board[pos + 10] = 'n'
                            board[pos + 11] = 'n'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 10] = None
                            board[pos + 11] = None
                            used.remove('n')
                    if not board[pos + 18]:
                        if 'v' not in used:
                            _num_tries += 1
                            used.add('v')
                            board[pos + 0] = 'v'
                            board[pos + 1] = 'v'
                            board[pos + 2] = 'v'
                            board[pos + 10] = 'v'
                            board[pos + 18] = 'v'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 2] = None
                            board[pos + 10] = None
                            board[pos + 18] = None
                            used.remove('v')
            if not board[pos + 8]:
                if not board[pos + 7]:
                    if not board[pos + 6]:
                        if 'n' not in used:
                            _num_tries += 1
                            used.add('n')
                            board[pos + 0] = 'n'
                            board[pos + 1] = 'n'
                            board[pos + 8] = 'n'
                            board[pos + 7] = 'n'
                            board[pos + 6] = 'n'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 6] = None
                            used.remove('n')
                    if not board[pos + 9]:
                        if 'p' not in used:
                            _num_tries += 1
                            used.add('p')
                            board[pos + 0] = 'p'
                            board[pos + 1] = 'p'
                            board[pos + 8] = 'p'
                            board[pos + 7] = 'p'
                            board[pos + 9] = 'p'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 9] = None
                            used.remove('p')
                    if not board[pos + 15]:
                        if 'w' not in used:
                            _num_tries += 1
                            used.add('w')
                            board[pos + 0] = 'w'
                            board[pos + 1] = 'w'
                            board[pos + 8] = 'w'
                            board[pos + 7] = 'w'
                            board[pos + 15] = 'w'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 15] = None
                            used.remove('w')
                    if not board[pos + 16]:
                        if 'f' not in used:
                            _num_tries += 1
                            used.add('f')
                            board[pos + 0] = 'f'
                            board[pos + 1] = 'f'
                            board[pos + 8] = 'f'
                            board[pos + 7] = 'f'
                            board[pos + 16] = 'f'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 16] = None
                            used.remove('f')
                if not board[pos + 9]:
                    if not board[pos + 10]:
                        if 'p' not in used:
                            _num_tries += 1
                            used.add('p')
                            board[pos + 0] = 'p'
                            board[pos + 1] = 'p'
                            board[pos + 8] = 'p'
                            board[pos + 9] = 'p'
                            board[pos + 10] = 'p'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            used.remove('p')
                    if not board[pos + 16]:
                        if 'p' not in used:
                            _num_tries += 1
                            used.add('p')
                            board[pos + 0] = 'p'
                            board[pos + 1] = 'p'
                            board[pos + 8] = 'p'
                            board[pos + 9] = 'p'
                            board[pos + 16] = 'p'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 16] = None
                            used.remove('p')
                    if not board[pos + 17]:
                        if 'p' not in used:
                            _num_tries += 1
                            used.add('p')
                            board[pos + 0] = 'p'
                            board[pos + 1] = 'p'
                            board[pos + 8] = 'p'
                            board[pos + 9] = 'p'
                            board[pos + 17] = 'p'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 17] = None
                            used.remove('p')
                if not board[pos + 16]:
                    if not board[pos + 15]:
                        if 'z' not in used:
                            _num_tries += 1
                            used.add('z')
                            board[pos + 0] = 'z'
                            board[pos + 1] = 'z'
                            board[pos + 8] = 'z'
                            board[pos + 16] = 'z'
                            board[pos + 15] = 'z'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 15] = None
                            used.remove('z')
                    if not board[pos + 17]:
                        if 'u' not in used:
                            _num_tries += 1
                            used.add('u')
                            board[pos + 0] = 'u'
                            board[pos + 1] = 'u'
                            board[pos + 8] = 'u'
                            board[pos + 16] = 'u'
                            board[pos + 17] = 'u'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 17] = None
                            used.remove('u')
                    if not board[pos + 24]:
                        if 'l' not in used:
                            _num_tries += 1
                            used.add('l')
                            board[pos + 0] = 'l'
                            board[pos + 1] = 'l'
                            board[pos + 8] = 'l'
                            board[pos + 16] = 'l'
                            board[pos + 24] = 'l'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 24] = None
                            used.remove('l')
            if not board[pos + 9]:
                if not board[pos + 10]:
                    if not board[pos + 11]:
                        if 'n' not in used:
                            _num_tries += 1
                            used.add('n')
                            board[pos + 0] = 'n'
                            board[pos + 1] = 'n'
                            board[pos + 9] = 'n'
                            board[pos + 10] = 'n'
                            board[pos + 11] = 'n'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            board[pos + 11] = None
                            used.remove('n')
                    if not board[pos + 17]:
                        if 'f' not in used:
                            _num_tries += 1
                            used.add('f')
                            board[pos + 0] = 'f'
                            board[pos + 1] = 'f'
                            board[pos + 9] = 'f'
                            board[pos + 10] = 'f'
                            board[pos + 17] = 'f'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            board[pos + 17] = None
                            used.remove('f')
                    if not board[pos + 18]:
                        if 'w' not in used:
                            _num_tries += 1
                            used.add('w')
                            board[pos + 0] = 'w'
                            board[pos + 1] = 'w'
                            board[pos + 9] = 'w'
                            board[pos + 10] = 'w'
                            board[pos + 18] = 'w'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            board[pos + 18] = None
                            used.remove('w')
                if not board[pos + 17]:
                    if not board[pos + 16]:
                        if 'u' not in used:
                            _num_tries += 1
                            used.add('u')
                            board[pos + 0] = 'u'
                            board[pos + 1] = 'u'
                            board[pos + 9] = 'u'
                            board[pos + 17] = 'u'
                            board[pos + 16] = 'u'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 9] = None
                            board[pos + 17] = None
                            board[pos + 16] = None
                            used.remove('u')
                    if not board[pos + 18]:
                        if 'z' not in used:
                            _num_tries += 1
                            used.add('z')
                            board[pos + 0] = 'z'
                            board[pos + 1] = 'z'
                            board[pos + 9] = 'z'
                            board[pos + 17] = 'z'
                            board[pos + 18] = 'z'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 9] = None
                            board[pos + 17] = None
                            board[pos + 18] = None
                            used.remove('z')
                    if not board[pos + 25]:
                        if 'l' not in used:
                            _num_tries += 1
                            used.add('l')
                            board[pos + 0] = 'l'
                            board[pos + 1] = 'l'
                            board[pos + 9] = 'l'
                            board[pos + 17] = 'l'
                            board[pos + 25] = 'l'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 1] = None
                            board[pos + 9] = None
                            board[pos + 17] = None
                            board[pos + 25] = None
                            used.remove('l')
        if not board[pos + 8]:
            if not board[pos + 7]:
                if not board[pos + 6]:
                    if not board[pos + 5]:
                        if 'l' not in used:
                            _num_tries += 1
                            used.add('l')
                            board[pos + 0] = 'l'
                            board[pos + 8] = 'l'
                            board[pos + 7] = 'l'
                            board[pos + 6] = 'l'
                            board[pos + 5] = 'l'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 6] = None
                            board[pos + 5] = None
                            used.remove('l')
                    if not board[pos + 9]:
                        if 'y' not in used:
                            _num_tries += 1
                            used.add('y')
                            board[pos + 0] = 'y'
                            board[pos + 8] = 'y'
                            board[pos + 7] = 'y'
                            board[pos + 6] = 'y'
                            board[pos + 9] = 'y'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 6] = None
                            board[pos + 9] = None
                            used.remove('y')
                    if not board[pos + 14]:
                        if 'z' not in used:
                            _num_tries += 1
                            used.add('z')
                            board[pos + 0] = 'z'
                            board[pos + 8] = 'z'
                            board[pos + 7] = 'z'
                            board[pos + 6] = 'z'
                            board[pos + 14] = 'z'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 6] = None
                            board[pos + 14] = None
                            used.remove('z')
                    if not board[pos + 15]:
                        if 'f' not in used:
                            _num_tries += 1
                            used.add('f')
                            board[pos + 0] = 'f'
                            board[pos + 8] = 'f'
                            board[pos + 7] = 'f'
                            board[pos + 6] = 'f'
                            board[pos + 15] = 'f'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 6] = None
                            board[pos + 15] = None
                            used.remove('f')
                    if not board[pos + 16]:
                        if 't' not in used:
                            _num_tries += 1
                            used.add('t')
                            board[pos + 0] = 't'
                            board[pos + 8] = 't'
                            board[pos + 7] = 't'
                            board[pos + 6] = 't'
                            board[pos + 16] = 't'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 6] = None
                            board[pos + 16] = None
                            used.remove('t')
                if not board[pos + 9]:
                    if not board[pos + 10]:
                        if 'y' not in used:
                            _num_tries += 1
                            used.add('y')
                            board[pos + 0] = 'y'
                            board[pos + 8] = 'y'
                            board[pos + 7] = 'y'
                            board[pos + 9] = 'y'
                            board[pos + 10] = 'y'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            used.remove('y')
                    if not board[pos + 15]:
                        if 'f' not in used:
                            _num_tries += 1
                            used.add('f')
                            board[pos + 0] = 'f'
                            board[pos + 8] = 'f'
                            board[pos + 7] = 'f'
                            board[pos + 9] = 'f'
                            board[pos + 15] = 'f'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 9] = None
                            board[pos + 15] = None
                            used.remove('f')
                    if not board[pos + 17]:
                        if 'f' not in used:
                            _num_tries += 1
                            used.add('f')
                            board[pos + 0] = 'f'
                            board[pos + 8] = 'f'
                            board[pos + 7] = 'f'
                            board[pos + 9] = 'f'
                            board[pos + 17] = 'f'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 9] = None
                            board[pos + 17] = None
                            used.remove('f')
                if not board[pos + 15]:
                    if not board[pos + 14]:
                        if 'w' not in used:
                            _num_tries += 1
                            used.add('w')
                            board[pos + 0] = 'w'
                            board[pos + 8] = 'w'
                            board[pos + 7] = 'w'
                            board[pos + 15] = 'w'
                            board[pos + 14] = 'w'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 15] = None
                            board[pos + 14] = None
                            used.remove('w')
                    if not board[pos + 16]:
                        if 'p' not in used:
                            _num_tries += 1
                            used.add('p')
                            board[pos + 0] = 'p'
                            board[pos + 8] = 'p'
                            board[pos + 7] = 'p'
                            board[pos + 15] = 'p'
                            board[pos + 16] = 'p'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 15] = None
                            board[pos + 16] = None
                            used.remove('p')
                    if not board[pos + 23]:
                        if 'n' not in used:
                            _num_tries += 1
                            used.add('n')
                            board[pos + 0] = 'n'
                            board[pos + 8] = 'n'
                            board[pos + 7] = 'n'
                            board[pos + 15] = 'n'
                            board[pos + 23] = 'n'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 15] = None
                            board[pos + 23] = None
                            used.remove('n')
                if not board[pos + 16]:
                    if not board[pos + 17]:
                        if 'f' not in used:
                            _num_tries += 1
                            used.add('f')
                            board[pos + 0] = 'f'
                            board[pos + 8] = 'f'
                            board[pos + 7] = 'f'
                            board[pos + 16] = 'f'
                            board[pos + 17] = 'f'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 16] = None
                            board[pos + 17] = None
                            used.remove('f')
                    if not board[pos + 24]:
                        if 'y' not in used:
                            _num_tries += 1
                            used.add('y')
                            board[pos + 0] = 'y'
                            board[pos + 8] = 'y'
                            board[pos + 7] = 'y'
                            board[pos + 16] = 'y'
                            board[pos + 24] = 'y'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 7] = None
                            board[pos + 16] = None
                            board[pos + 24] = None
                            used.remove('y')
            if not board[pos + 9]:
                if not board[pos + 10]:
                    if not board[pos + 2]:
                        if 'u' not in used:
                            _num_tries += 1
                            used.add('u')
                            board[pos + 0] = 'u'
                            board[pos + 8] = 'u'
                            board[pos + 9] = 'u'
                            board[pos + 10] = 'u'
                            board[pos + 2] = 'u'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            board[pos + 2] = None
                            used.remove('u')
                    if not board[pos + 11]:
                        if 'l' not in used:
                            _num_tries += 1
                            used.add('l')
                            board[pos + 0] = 'l'
                            board[pos + 8] = 'l'
                            board[pos + 9] = 'l'
                            board[pos + 10] = 'l'
                            board[pos + 11] = 'l'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            board[pos + 11] = None
                            used.remove('l')
                    if not board[pos + 16]:
                        if 't' not in used:
                            _num_tries += 1
                            used.add('t')
                            board[pos + 0] = 't'
                            board[pos + 8] = 't'
                            board[pos + 9] = 't'
                            board[pos + 10] = 't'
                            board[pos + 16] = 't'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            board[pos + 16] = None
                            used.remove('t')
                    if not board[pos + 17]:
                        if 'f' not in used:
                            _num_tries += 1
                            used.add('f')
                            board[pos + 0] = 'f'
                            board[pos + 8] = 'f'
                            board[pos + 9] = 'f'
                            board[pos + 10] = 'f'
                            board[pos + 17] = 'f'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            board[pos + 17] = None
                            used.remove('f')
                    if not board[pos + 18]:
                        if 'z' not in used:
                            _num_tries += 1
                            used.add('z')
                            board[pos + 0] = 'z'
                            board[pos + 8] = 'z'
                            board[pos + 9] = 'z'
                            board[pos + 10] = 'z'
                            board[pos + 18] = 'z'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 10] = None
                            board[pos + 18] = None
                            used.remove('z')
                if not board[pos + 16]:
                    if not board[pos + 15]:
                        if 'f' not in used:
                            _num_tries += 1
                            used.add('f')
                            board[pos + 0] = 'f'
                            board[pos + 8] = 'f'
                            board[pos + 9] = 'f'
                            board[pos + 16] = 'f'
                            board[pos + 15] = 'f'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 16] = None
                            board[pos + 15] = None
                            used.remove('f')
                    if not board[pos + 17]:
                        if 'p' not in used:
                            _num_tries += 1
                            used.add('p')
                            board[pos + 0] = 'p'
                            board[pos + 8] = 'p'
                            board[pos + 9] = 'p'
                            board[pos + 16] = 'p'
                            board[pos + 17] = 'p'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 16] = None
                            board[pos + 17] = None
                            used.remove('p')
                    if not board[pos + 24]:
                        if 'y' not in used:
                            _num_tries += 1
                            used.add('y')
                            board[pos + 0] = 'y'
                            board[pos + 8] = 'y'
                            board[pos + 9] = 'y'
                            board[pos + 16] = 'y'
                            board[pos + 24] = 'y'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 16] = None
                            board[pos + 24] = None
                            used.remove('y')
                if not board[pos + 17]:
                    if not board[pos + 18]:
                        if 'w' not in used:
                            _num_tries += 1
                            used.add('w')
                            board[pos + 0] = 'w'
                            board[pos + 8] = 'w'
                            board[pos + 9] = 'w'
                            board[pos + 17] = 'w'
                            board[pos + 18] = 'w'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 17] = None
                            board[pos + 18] = None
                            used.remove('w')
                    if not board[pos + 25]:
                        if 'n' not in used:
                            _num_tries += 1
                            used.add('n')
                            board[pos + 0] = 'n'
                            board[pos + 8] = 'n'
                            board[pos + 9] = 'n'
                            board[pos + 17] = 'n'
                            board[pos + 25] = 'n'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 9] = None
                            board[pos + 17] = None
                            board[pos + 25] = None
                            used.remove('n')
            if not board[pos + 16]:
                if not board[pos + 15]:
                    if not board[pos + 14]:
                        if 'v' not in used:
                            _num_tries += 1
                            used.add('v')
                            board[pos + 0] = 'v'
                            board[pos + 8] = 'v'
                            board[pos + 16] = 'v'
                            board[pos + 15] = 'v'
                            board[pos + 14] = 'v'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 15] = None
                            board[pos + 14] = None
                            used.remove('v')
                    if not board[pos + 17]:
                        if 't' not in used:
                            _num_tries += 1
                            used.add('t')
                            board[pos + 0] = 't'
                            board[pos + 8] = 't'
                            board[pos + 16] = 't'
                            board[pos + 15] = 't'
                            board[pos + 17] = 't'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 15] = None
                            board[pos + 17] = None
                            used.remove('t')
                    if not board[pos + 23]:
                        if 'n' not in used:
                            _num_tries += 1
                            used.add('n')
                            board[pos + 0] = 'n'
                            board[pos + 8] = 'n'
                            board[pos + 16] = 'n'
                            board[pos + 15] = 'n'
                            board[pos + 23] = 'n'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 15] = None
                            board[pos + 23] = None
                            used.remove('n')
                    if not board[pos + 24]:
                        if 'y' not in used:
                            _num_tries += 1
                            used.add('y')
                            board[pos + 0] = 'y'
                            board[pos + 8] = 'y'
                            board[pos + 16] = 'y'
                            board[pos + 15] = 'y'
                            board[pos + 24] = 'y'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 15] = None
                            board[pos + 24] = None
                            used.remove('y')
                if not board[pos + 17]:
                    if not board[pos + 18]:
                        if 'v' not in used:
                            _num_tries += 1
                            used.add('v')
                            board[pos + 0] = 'v'
                            board[pos + 8] = 'v'
                            board[pos + 16] = 'v'
                            board[pos + 17] = 'v'
                            board[pos + 18] = 'v'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 17] = None
                            board[pos + 18] = None
                            used.remove('v')
                    if not board[pos + 24]:
                        if 'y' not in used:
                            _num_tries += 1
                            used.add('y')
                            board[pos + 0] = 'y'
                            board[pos + 8] = 'y'
                            board[pos + 16] = 'y'
                            board[pos + 17] = 'y'
                            board[pos + 24] = 'y'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 17] = None
                            board[pos + 24] = None
                            used.remove('y')
                    if not board[pos + 25]:
                        if 'n' not in used:
                            _num_tries += 1
                            used.add('n')
                            board[pos + 0] = 'n'
                            board[pos + 8] = 'n'
                            board[pos + 16] = 'n'
                            board[pos + 17] = 'n'
                            board[pos + 25] = 'n'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 17] = None
                            board[pos + 25] = None
                            used.remove('n')
                if not board[pos + 24]:
                    if not board[pos + 23]:
                        if 'l' not in used:
                            _num_tries += 1
                            used.add('l')
                            board[pos + 0] = 'l'
                            board[pos + 8] = 'l'
                            board[pos + 16] = 'l'
                            board[pos + 24] = 'l'
                            board[pos + 23] = 'l'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 24] = None
                            board[pos + 23] = None
                            used.remove('l')
                    if not board[pos + 25]:
                        if 'l' not in used:
                            _num_tries += 1
                            used.add('l')
                            board[pos + 0] = 'l'
                            board[pos + 8] = 'l'
                            board[pos + 16] = 'l'
                            board[pos + 24] = 'l'
                            board[pos + 25] = 'l'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 24] = None
                            board[pos + 25] = None
                            used.remove('l')
                    if not board[pos + 32]:
                        if 'i' not in used:
                            _num_tries += 1
                            used.add('i')
                            board[pos + 0] = 'i'
                            board[pos + 8] = 'i'
                            board[pos + 16] = 'i'
                            board[pos + 24] = 'i'
                            board[pos + 32] = 'i'
                            solve(board, pos, used)
                            board[pos + 0] = None
                            board[pos + 8] = None
                            board[pos + 16] = None
                            board[pos + 24] = None
                            board[pos + 32] = None
                            used.remove('i')
