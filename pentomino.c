// Pentomino puzzle solver in C -- see pentomino.py for original

#include <stdio.h>

#define NUM_PIECES 12
#define WIDTH 6
#define HEIGHT 10
#define TOTAL_WIDTH (WIDTH + 2)
#define TOTAL_HEIGHT (HEIGHT + 2)
#define QUIET 1

int _num_solutions = 0;
int _num_tries = 0;

void init_board(char* board) {
    board[0] = '+';
    for (int i = 1; i < WIDTH + 1; i++) {
        board[i] = '-';
    }
    board[WIDTH + 1] = '+';
    for (int i = TOTAL_WIDTH; i < TOTAL_WIDTH * (HEIGHT + 1); i += TOTAL_WIDTH) {
        board[i] = '|';
        for (int j = i + 1; j < i + WIDTH + 1; j++) {
            board[j] = 0;
        }
        board[i + WIDTH + 1] = '|';
    }
    board[TOTAL_WIDTH * (HEIGHT + 1)] = '+';
    for (int i = TOTAL_WIDTH * (HEIGHT + 1) + 1; i < TOTAL_WIDTH * (HEIGHT + 1) + WIDTH + 1; i++) {
        board[i] = '-';
    }
    board[TOTAL_WIDTH * (HEIGHT + 1) + WIDTH + 1] = '+';
}

void display_solution(char* board) {
    _num_solutions++;
    if (QUIET) {
        return;
    }
    printf("Solution %d:\n", _num_solutions);
    for (int i = 0; i < TOTAL_WIDTH * TOTAL_HEIGHT; i += TOTAL_WIDTH) {
        for (int j = i; j < i + TOTAL_WIDTH; j++) {
            printf("%c", board[j] ? board[j] : ' ');
        }
        printf("\n");
    }
    printf("\n");
}

#include "generated_solve.c"

void place_x(char* board, int x, int y, char value) {
    int pos = TOTAL_WIDTH * y + x;
    board[pos] = value;
    board[pos + TOTAL_WIDTH] = value;
    board[pos + TOTAL_WIDTH * 2] = value;
    board[pos + TOTAL_WIDTH - 1] = value;
    board[pos + TOTAL_WIDTH + 1] = value;
}

void solve_with_x_at(char* board, int x, int y) {
    place_x(board, x, y, 'x');
    solve(board, TOTAL_WIDTH + 1, 1<<X_PIECE_NUM);
    place_x(board, x, y, 0);
}

void solve_6x10(char* board) {
    solve_with_x_at(board, 3, 1);
    solve_with_x_at(board, 2, 2);
    solve_with_x_at(board, 3, 2);
    solve_with_x_at(board, 2, 3);
    solve_with_x_at(board, 3, 3);
    solve_with_x_at(board, 2, 4);
    solve_with_x_at(board, 3, 4);
}

int main() {
    char board[TOTAL_WIDTH * TOTAL_HEIGHT];

    init_board(board);
    solve_6x10(board);
    printf("Found %d solutions and tried %d pieces\n", _num_solutions, _num_tries);
    return 0;
}
