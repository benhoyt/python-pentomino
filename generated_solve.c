#define X_PIECE_NUM 9

void solve(char* board, int pos, unsigned int used) {
    if (used == (1 << NUM_PIECES) - 1) {
        display_solution(board);
        return;
    }

    while (board[pos]) {
        pos++;
    }

    if (board[pos + 0] == 0) {
        if (board[pos + 1] == 0) {
            if (board[pos + 2] == 0) {
                if (board[pos + 3] == 0) {
                    if (board[pos + 4] == 0) {
                        if ((used & (1<<1)) == 0) {
                            _num_tries++;
                            used ^= 1<<1;
                            board[pos + 0] = 'i';
                            board[pos + 1] = 'i';
                            board[pos + 2] = 'i';
                            board[pos + 3] = 'i';
                            board[pos + 4] = 'i';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 3] = 0;
                            board[pos + 4] = 0;
                            used ^= 1<<1;
                        }
                    }
                    if (board[pos + 8] == 0) {
                        if ((used & (1<<2)) == 0) {
                            _num_tries++;
                            used ^= 1<<2;
                            board[pos + 0] = 'l';
                            board[pos + 1] = 'l';
                            board[pos + 2] = 'l';
                            board[pos + 3] = 'l';
                            board[pos + 8] = 'l';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 3] = 0;
                            board[pos + 8] = 0;
                            used ^= 1<<2;
                        }
                    }
                    if (board[pos + 9] == 0) {
                        if ((used & (1<<10)) == 0) {
                            _num_tries++;
                            used ^= 1<<10;
                            board[pos + 0] = 'y';
                            board[pos + 1] = 'y';
                            board[pos + 2] = 'y';
                            board[pos + 3] = 'y';
                            board[pos + 9] = 'y';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 3] = 0;
                            board[pos + 9] = 0;
                            used ^= 1<<10;
                        }
                    }
                    if (board[pos + 10] == 0) {
                        if ((used & (1<<10)) == 0) {
                            _num_tries++;
                            used ^= 1<<10;
                            board[pos + 0] = 'y';
                            board[pos + 1] = 'y';
                            board[pos + 2] = 'y';
                            board[pos + 3] = 'y';
                            board[pos + 10] = 'y';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 3] = 0;
                            board[pos + 10] = 0;
                            used ^= 1<<10;
                        }
                    }
                    if (board[pos + 11] == 0) {
                        if ((used & (1<<2)) == 0) {
                            _num_tries++;
                            used ^= 1<<2;
                            board[pos + 0] = 'l';
                            board[pos + 1] = 'l';
                            board[pos + 2] = 'l';
                            board[pos + 3] = 'l';
                            board[pos + 11] = 'l';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 3] = 0;
                            board[pos + 11] = 0;
                            used ^= 1<<2;
                        }
                    }
                }
                if (board[pos + 8] == 0) {
                    if (board[pos + 7] == 0) {
                        if ((used & (1<<3)) == 0) {
                            _num_tries++;
                            used ^= 1<<3;
                            board[pos + 0] = 'n';
                            board[pos + 1] = 'n';
                            board[pos + 2] = 'n';
                            board[pos + 8] = 'n';
                            board[pos + 7] = 'n';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            used ^= 1<<3;
                        }
                    }
                    if (board[pos + 9] == 0) {
                        if ((used & (1<<4)) == 0) {
                            _num_tries++;
                            used ^= 1<<4;
                            board[pos + 0] = 'p';
                            board[pos + 1] = 'p';
                            board[pos + 2] = 'p';
                            board[pos + 8] = 'p';
                            board[pos + 9] = 'p';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            used ^= 1<<4;
                        }
                    }
                    if (board[pos + 10] == 0) {
                        if ((used & (1<<6)) == 0) {
                            _num_tries++;
                            used ^= 1<<6;
                            board[pos + 0] = 'u';
                            board[pos + 1] = 'u';
                            board[pos + 2] = 'u';
                            board[pos + 8] = 'u';
                            board[pos + 10] = 'u';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 8] = 0;
                            board[pos + 10] = 0;
                            used ^= 1<<6;
                        }
                    }
                    if (board[pos + 16] == 0) {
                        if ((used & (1<<7)) == 0) {
                            _num_tries++;
                            used ^= 1<<7;
                            board[pos + 0] = 'v';
                            board[pos + 1] = 'v';
                            board[pos + 2] = 'v';
                            board[pos + 8] = 'v';
                            board[pos + 16] = 'v';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            used ^= 1<<7;
                        }
                    }
                }
                if (board[pos + 9] == 0) {
                    if (board[pos + 10] == 0) {
                        if ((used & (1<<4)) == 0) {
                            _num_tries++;
                            used ^= 1<<4;
                            board[pos + 0] = 'p';
                            board[pos + 1] = 'p';
                            board[pos + 2] = 'p';
                            board[pos + 9] = 'p';
                            board[pos + 10] = 'p';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            used ^= 1<<4;
                        }
                    }
                    if (board[pos + 17] == 0) {
                        if ((used & (1<<5)) == 0) {
                            _num_tries++;
                            used ^= 1<<5;
                            board[pos + 0] = 't';
                            board[pos + 1] = 't';
                            board[pos + 2] = 't';
                            board[pos + 9] = 't';
                            board[pos + 17] = 't';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 9] = 0;
                            board[pos + 17] = 0;
                            used ^= 1<<5;
                        }
                    }
                }
                if (board[pos + 10] == 0) {
                    if (board[pos + 11] == 0) {
                        if ((used & (1<<3)) == 0) {
                            _num_tries++;
                            used ^= 1<<3;
                            board[pos + 0] = 'n';
                            board[pos + 1] = 'n';
                            board[pos + 2] = 'n';
                            board[pos + 10] = 'n';
                            board[pos + 11] = 'n';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 10] = 0;
                            board[pos + 11] = 0;
                            used ^= 1<<3;
                        }
                    }
                    if (board[pos + 18] == 0) {
                        if ((used & (1<<7)) == 0) {
                            _num_tries++;
                            used ^= 1<<7;
                            board[pos + 0] = 'v';
                            board[pos + 1] = 'v';
                            board[pos + 2] = 'v';
                            board[pos + 10] = 'v';
                            board[pos + 18] = 'v';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 2] = 0;
                            board[pos + 10] = 0;
                            board[pos + 18] = 0;
                            used ^= 1<<7;
                        }
                    }
                }
            }
            if (board[pos + 8] == 0) {
                if (board[pos + 7] == 0) {
                    if (board[pos + 6] == 0) {
                        if ((used & (1<<3)) == 0) {
                            _num_tries++;
                            used ^= 1<<3;
                            board[pos + 0] = 'n';
                            board[pos + 1] = 'n';
                            board[pos + 8] = 'n';
                            board[pos + 7] = 'n';
                            board[pos + 6] = 'n';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 6] = 0;
                            used ^= 1<<3;
                        }
                    }
                    if (board[pos + 9] == 0) {
                        if ((used & (1<<4)) == 0) {
                            _num_tries++;
                            used ^= 1<<4;
                            board[pos + 0] = 'p';
                            board[pos + 1] = 'p';
                            board[pos + 8] = 'p';
                            board[pos + 7] = 'p';
                            board[pos + 9] = 'p';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 9] = 0;
                            used ^= 1<<4;
                        }
                    }
                    if (board[pos + 15] == 0) {
                        if ((used & (1<<8)) == 0) {
                            _num_tries++;
                            used ^= 1<<8;
                            board[pos + 0] = 'w';
                            board[pos + 1] = 'w';
                            board[pos + 8] = 'w';
                            board[pos + 7] = 'w';
                            board[pos + 15] = 'w';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 15] = 0;
                            used ^= 1<<8;
                        }
                    }
                    if (board[pos + 16] == 0) {
                        if ((used & (1<<0)) == 0) {
                            _num_tries++;
                            used ^= 1<<0;
                            board[pos + 0] = 'f';
                            board[pos + 1] = 'f';
                            board[pos + 8] = 'f';
                            board[pos + 7] = 'f';
                            board[pos + 16] = 'f';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 16] = 0;
                            used ^= 1<<0;
                        }
                    }
                }
                if (board[pos + 9] == 0) {
                    if (board[pos + 10] == 0) {
                        if ((used & (1<<4)) == 0) {
                            _num_tries++;
                            used ^= 1<<4;
                            board[pos + 0] = 'p';
                            board[pos + 1] = 'p';
                            board[pos + 8] = 'p';
                            board[pos + 9] = 'p';
                            board[pos + 10] = 'p';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            used ^= 1<<4;
                        }
                    }
                    if (board[pos + 16] == 0) {
                        if ((used & (1<<4)) == 0) {
                            _num_tries++;
                            used ^= 1<<4;
                            board[pos + 0] = 'p';
                            board[pos + 1] = 'p';
                            board[pos + 8] = 'p';
                            board[pos + 9] = 'p';
                            board[pos + 16] = 'p';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 16] = 0;
                            used ^= 1<<4;
                        }
                    }
                    if (board[pos + 17] == 0) {
                        if ((used & (1<<4)) == 0) {
                            _num_tries++;
                            used ^= 1<<4;
                            board[pos + 0] = 'p';
                            board[pos + 1] = 'p';
                            board[pos + 8] = 'p';
                            board[pos + 9] = 'p';
                            board[pos + 17] = 'p';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 17] = 0;
                            used ^= 1<<4;
                        }
                    }
                }
                if (board[pos + 16] == 0) {
                    if (board[pos + 15] == 0) {
                        if ((used & (1<<11)) == 0) {
                            _num_tries++;
                            used ^= 1<<11;
                            board[pos + 0] = 'z';
                            board[pos + 1] = 'z';
                            board[pos + 8] = 'z';
                            board[pos + 16] = 'z';
                            board[pos + 15] = 'z';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 15] = 0;
                            used ^= 1<<11;
                        }
                    }
                    if (board[pos + 17] == 0) {
                        if ((used & (1<<6)) == 0) {
                            _num_tries++;
                            used ^= 1<<6;
                            board[pos + 0] = 'u';
                            board[pos + 1] = 'u';
                            board[pos + 8] = 'u';
                            board[pos + 16] = 'u';
                            board[pos + 17] = 'u';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 17] = 0;
                            used ^= 1<<6;
                        }
                    }
                    if (board[pos + 24] == 0) {
                        if ((used & (1<<2)) == 0) {
                            _num_tries++;
                            used ^= 1<<2;
                            board[pos + 0] = 'l';
                            board[pos + 1] = 'l';
                            board[pos + 8] = 'l';
                            board[pos + 16] = 'l';
                            board[pos + 24] = 'l';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 24] = 0;
                            used ^= 1<<2;
                        }
                    }
                }
            }
            if (board[pos + 9] == 0) {
                if (board[pos + 10] == 0) {
                    if (board[pos + 11] == 0) {
                        if ((used & (1<<3)) == 0) {
                            _num_tries++;
                            used ^= 1<<3;
                            board[pos + 0] = 'n';
                            board[pos + 1] = 'n';
                            board[pos + 9] = 'n';
                            board[pos + 10] = 'n';
                            board[pos + 11] = 'n';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            board[pos + 11] = 0;
                            used ^= 1<<3;
                        }
                    }
                    if (board[pos + 17] == 0) {
                        if ((used & (1<<0)) == 0) {
                            _num_tries++;
                            used ^= 1<<0;
                            board[pos + 0] = 'f';
                            board[pos + 1] = 'f';
                            board[pos + 9] = 'f';
                            board[pos + 10] = 'f';
                            board[pos + 17] = 'f';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            board[pos + 17] = 0;
                            used ^= 1<<0;
                        }
                    }
                    if (board[pos + 18] == 0) {
                        if ((used & (1<<8)) == 0) {
                            _num_tries++;
                            used ^= 1<<8;
                            board[pos + 0] = 'w';
                            board[pos + 1] = 'w';
                            board[pos + 9] = 'w';
                            board[pos + 10] = 'w';
                            board[pos + 18] = 'w';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            board[pos + 18] = 0;
                            used ^= 1<<8;
                        }
                    }
                }
                if (board[pos + 17] == 0) {
                    if (board[pos + 16] == 0) {
                        if ((used & (1<<6)) == 0) {
                            _num_tries++;
                            used ^= 1<<6;
                            board[pos + 0] = 'u';
                            board[pos + 1] = 'u';
                            board[pos + 9] = 'u';
                            board[pos + 17] = 'u';
                            board[pos + 16] = 'u';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 9] = 0;
                            board[pos + 17] = 0;
                            board[pos + 16] = 0;
                            used ^= 1<<6;
                        }
                    }
                    if (board[pos + 18] == 0) {
                        if ((used & (1<<11)) == 0) {
                            _num_tries++;
                            used ^= 1<<11;
                            board[pos + 0] = 'z';
                            board[pos + 1] = 'z';
                            board[pos + 9] = 'z';
                            board[pos + 17] = 'z';
                            board[pos + 18] = 'z';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 9] = 0;
                            board[pos + 17] = 0;
                            board[pos + 18] = 0;
                            used ^= 1<<11;
                        }
                    }
                    if (board[pos + 25] == 0) {
                        if ((used & (1<<2)) == 0) {
                            _num_tries++;
                            used ^= 1<<2;
                            board[pos + 0] = 'l';
                            board[pos + 1] = 'l';
                            board[pos + 9] = 'l';
                            board[pos + 17] = 'l';
                            board[pos + 25] = 'l';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 1] = 0;
                            board[pos + 9] = 0;
                            board[pos + 17] = 0;
                            board[pos + 25] = 0;
                            used ^= 1<<2;
                        }
                    }
                }
            }
        }
        if (board[pos + 8] == 0) {
            if (board[pos + 7] == 0) {
                if (board[pos + 6] == 0) {
                    if (board[pos + 5] == 0) {
                        if ((used & (1<<2)) == 0) {
                            _num_tries++;
                            used ^= 1<<2;
                            board[pos + 0] = 'l';
                            board[pos + 8] = 'l';
                            board[pos + 7] = 'l';
                            board[pos + 6] = 'l';
                            board[pos + 5] = 'l';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 6] = 0;
                            board[pos + 5] = 0;
                            used ^= 1<<2;
                        }
                    }
                    if (board[pos + 9] == 0) {
                        if ((used & (1<<10)) == 0) {
                            _num_tries++;
                            used ^= 1<<10;
                            board[pos + 0] = 'y';
                            board[pos + 8] = 'y';
                            board[pos + 7] = 'y';
                            board[pos + 6] = 'y';
                            board[pos + 9] = 'y';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 6] = 0;
                            board[pos + 9] = 0;
                            used ^= 1<<10;
                        }
                    }
                    if (board[pos + 14] == 0) {
                        if ((used & (1<<11)) == 0) {
                            _num_tries++;
                            used ^= 1<<11;
                            board[pos + 0] = 'z';
                            board[pos + 8] = 'z';
                            board[pos + 7] = 'z';
                            board[pos + 6] = 'z';
                            board[pos + 14] = 'z';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 6] = 0;
                            board[pos + 14] = 0;
                            used ^= 1<<11;
                        }
                    }
                    if (board[pos + 15] == 0) {
                        if ((used & (1<<0)) == 0) {
                            _num_tries++;
                            used ^= 1<<0;
                            board[pos + 0] = 'f';
                            board[pos + 8] = 'f';
                            board[pos + 7] = 'f';
                            board[pos + 6] = 'f';
                            board[pos + 15] = 'f';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 6] = 0;
                            board[pos + 15] = 0;
                            used ^= 1<<0;
                        }
                    }
                    if (board[pos + 16] == 0) {
                        if ((used & (1<<5)) == 0) {
                            _num_tries++;
                            used ^= 1<<5;
                            board[pos + 0] = 't';
                            board[pos + 8] = 't';
                            board[pos + 7] = 't';
                            board[pos + 6] = 't';
                            board[pos + 16] = 't';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 6] = 0;
                            board[pos + 16] = 0;
                            used ^= 1<<5;
                        }
                    }
                }
                if (board[pos + 9] == 0) {
                    if (board[pos + 10] == 0) {
                        if ((used & (1<<10)) == 0) {
                            _num_tries++;
                            used ^= 1<<10;
                            board[pos + 0] = 'y';
                            board[pos + 8] = 'y';
                            board[pos + 7] = 'y';
                            board[pos + 9] = 'y';
                            board[pos + 10] = 'y';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            used ^= 1<<10;
                        }
                    }
                    if (board[pos + 15] == 0) {
                        if ((used & (1<<0)) == 0) {
                            _num_tries++;
                            used ^= 1<<0;
                            board[pos + 0] = 'f';
                            board[pos + 8] = 'f';
                            board[pos + 7] = 'f';
                            board[pos + 9] = 'f';
                            board[pos + 15] = 'f';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 9] = 0;
                            board[pos + 15] = 0;
                            used ^= 1<<0;
                        }
                    }
                    if (board[pos + 17] == 0) {
                        if ((used & (1<<0)) == 0) {
                            _num_tries++;
                            used ^= 1<<0;
                            board[pos + 0] = 'f';
                            board[pos + 8] = 'f';
                            board[pos + 7] = 'f';
                            board[pos + 9] = 'f';
                            board[pos + 17] = 'f';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 9] = 0;
                            board[pos + 17] = 0;
                            used ^= 1<<0;
                        }
                    }
                }
                if (board[pos + 15] == 0) {
                    if (board[pos + 14] == 0) {
                        if ((used & (1<<8)) == 0) {
                            _num_tries++;
                            used ^= 1<<8;
                            board[pos + 0] = 'w';
                            board[pos + 8] = 'w';
                            board[pos + 7] = 'w';
                            board[pos + 15] = 'w';
                            board[pos + 14] = 'w';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 15] = 0;
                            board[pos + 14] = 0;
                            used ^= 1<<8;
                        }
                    }
                    if (board[pos + 16] == 0) {
                        if ((used & (1<<4)) == 0) {
                            _num_tries++;
                            used ^= 1<<4;
                            board[pos + 0] = 'p';
                            board[pos + 8] = 'p';
                            board[pos + 7] = 'p';
                            board[pos + 15] = 'p';
                            board[pos + 16] = 'p';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 15] = 0;
                            board[pos + 16] = 0;
                            used ^= 1<<4;
                        }
                    }
                    if (board[pos + 23] == 0) {
                        if ((used & (1<<3)) == 0) {
                            _num_tries++;
                            used ^= 1<<3;
                            board[pos + 0] = 'n';
                            board[pos + 8] = 'n';
                            board[pos + 7] = 'n';
                            board[pos + 15] = 'n';
                            board[pos + 23] = 'n';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 15] = 0;
                            board[pos + 23] = 0;
                            used ^= 1<<3;
                        }
                    }
                }
                if (board[pos + 16] == 0) {
                    if (board[pos + 17] == 0) {
                        if ((used & (1<<0)) == 0) {
                            _num_tries++;
                            used ^= 1<<0;
                            board[pos + 0] = 'f';
                            board[pos + 8] = 'f';
                            board[pos + 7] = 'f';
                            board[pos + 16] = 'f';
                            board[pos + 17] = 'f';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 16] = 0;
                            board[pos + 17] = 0;
                            used ^= 1<<0;
                        }
                    }
                    if (board[pos + 24] == 0) {
                        if ((used & (1<<10)) == 0) {
                            _num_tries++;
                            used ^= 1<<10;
                            board[pos + 0] = 'y';
                            board[pos + 8] = 'y';
                            board[pos + 7] = 'y';
                            board[pos + 16] = 'y';
                            board[pos + 24] = 'y';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 7] = 0;
                            board[pos + 16] = 0;
                            board[pos + 24] = 0;
                            used ^= 1<<10;
                        }
                    }
                }
            }
            if (board[pos + 9] == 0) {
                if (board[pos + 10] == 0) {
                    if (board[pos + 2] == 0) {
                        if ((used & (1<<6)) == 0) {
                            _num_tries++;
                            used ^= 1<<6;
                            board[pos + 0] = 'u';
                            board[pos + 8] = 'u';
                            board[pos + 9] = 'u';
                            board[pos + 10] = 'u';
                            board[pos + 2] = 'u';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            board[pos + 2] = 0;
                            used ^= 1<<6;
                        }
                    }
                    if (board[pos + 11] == 0) {
                        if ((used & (1<<2)) == 0) {
                            _num_tries++;
                            used ^= 1<<2;
                            board[pos + 0] = 'l';
                            board[pos + 8] = 'l';
                            board[pos + 9] = 'l';
                            board[pos + 10] = 'l';
                            board[pos + 11] = 'l';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            board[pos + 11] = 0;
                            used ^= 1<<2;
                        }
                    }
                    if (board[pos + 16] == 0) {
                        if ((used & (1<<5)) == 0) {
                            _num_tries++;
                            used ^= 1<<5;
                            board[pos + 0] = 't';
                            board[pos + 8] = 't';
                            board[pos + 9] = 't';
                            board[pos + 10] = 't';
                            board[pos + 16] = 't';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            board[pos + 16] = 0;
                            used ^= 1<<5;
                        }
                    }
                    if (board[pos + 17] == 0) {
                        if ((used & (1<<0)) == 0) {
                            _num_tries++;
                            used ^= 1<<0;
                            board[pos + 0] = 'f';
                            board[pos + 8] = 'f';
                            board[pos + 9] = 'f';
                            board[pos + 10] = 'f';
                            board[pos + 17] = 'f';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            board[pos + 17] = 0;
                            used ^= 1<<0;
                        }
                    }
                    if (board[pos + 18] == 0) {
                        if ((used & (1<<11)) == 0) {
                            _num_tries++;
                            used ^= 1<<11;
                            board[pos + 0] = 'z';
                            board[pos + 8] = 'z';
                            board[pos + 9] = 'z';
                            board[pos + 10] = 'z';
                            board[pos + 18] = 'z';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 10] = 0;
                            board[pos + 18] = 0;
                            used ^= 1<<11;
                        }
                    }
                }
                if (board[pos + 16] == 0) {
                    if (board[pos + 15] == 0) {
                        if ((used & (1<<0)) == 0) {
                            _num_tries++;
                            used ^= 1<<0;
                            board[pos + 0] = 'f';
                            board[pos + 8] = 'f';
                            board[pos + 9] = 'f';
                            board[pos + 16] = 'f';
                            board[pos + 15] = 'f';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 16] = 0;
                            board[pos + 15] = 0;
                            used ^= 1<<0;
                        }
                    }
                    if (board[pos + 17] == 0) {
                        if ((used & (1<<4)) == 0) {
                            _num_tries++;
                            used ^= 1<<4;
                            board[pos + 0] = 'p';
                            board[pos + 8] = 'p';
                            board[pos + 9] = 'p';
                            board[pos + 16] = 'p';
                            board[pos + 17] = 'p';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 16] = 0;
                            board[pos + 17] = 0;
                            used ^= 1<<4;
                        }
                    }
                    if (board[pos + 24] == 0) {
                        if ((used & (1<<10)) == 0) {
                            _num_tries++;
                            used ^= 1<<10;
                            board[pos + 0] = 'y';
                            board[pos + 8] = 'y';
                            board[pos + 9] = 'y';
                            board[pos + 16] = 'y';
                            board[pos + 24] = 'y';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 16] = 0;
                            board[pos + 24] = 0;
                            used ^= 1<<10;
                        }
                    }
                }
                if (board[pos + 17] == 0) {
                    if (board[pos + 18] == 0) {
                        if ((used & (1<<8)) == 0) {
                            _num_tries++;
                            used ^= 1<<8;
                            board[pos + 0] = 'w';
                            board[pos + 8] = 'w';
                            board[pos + 9] = 'w';
                            board[pos + 17] = 'w';
                            board[pos + 18] = 'w';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 17] = 0;
                            board[pos + 18] = 0;
                            used ^= 1<<8;
                        }
                    }
                    if (board[pos + 25] == 0) {
                        if ((used & (1<<3)) == 0) {
                            _num_tries++;
                            used ^= 1<<3;
                            board[pos + 0] = 'n';
                            board[pos + 8] = 'n';
                            board[pos + 9] = 'n';
                            board[pos + 17] = 'n';
                            board[pos + 25] = 'n';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 9] = 0;
                            board[pos + 17] = 0;
                            board[pos + 25] = 0;
                            used ^= 1<<3;
                        }
                    }
                }
            }
            if (board[pos + 16] == 0) {
                if (board[pos + 15] == 0) {
                    if (board[pos + 14] == 0) {
                        if ((used & (1<<7)) == 0) {
                            _num_tries++;
                            used ^= 1<<7;
                            board[pos + 0] = 'v';
                            board[pos + 8] = 'v';
                            board[pos + 16] = 'v';
                            board[pos + 15] = 'v';
                            board[pos + 14] = 'v';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 15] = 0;
                            board[pos + 14] = 0;
                            used ^= 1<<7;
                        }
                    }
                    if (board[pos + 17] == 0) {
                        if ((used & (1<<5)) == 0) {
                            _num_tries++;
                            used ^= 1<<5;
                            board[pos + 0] = 't';
                            board[pos + 8] = 't';
                            board[pos + 16] = 't';
                            board[pos + 15] = 't';
                            board[pos + 17] = 't';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 15] = 0;
                            board[pos + 17] = 0;
                            used ^= 1<<5;
                        }
                    }
                    if (board[pos + 23] == 0) {
                        if ((used & (1<<3)) == 0) {
                            _num_tries++;
                            used ^= 1<<3;
                            board[pos + 0] = 'n';
                            board[pos + 8] = 'n';
                            board[pos + 16] = 'n';
                            board[pos + 15] = 'n';
                            board[pos + 23] = 'n';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 15] = 0;
                            board[pos + 23] = 0;
                            used ^= 1<<3;
                        }
                    }
                    if (board[pos + 24] == 0) {
                        if ((used & (1<<10)) == 0) {
                            _num_tries++;
                            used ^= 1<<10;
                            board[pos + 0] = 'y';
                            board[pos + 8] = 'y';
                            board[pos + 16] = 'y';
                            board[pos + 15] = 'y';
                            board[pos + 24] = 'y';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 15] = 0;
                            board[pos + 24] = 0;
                            used ^= 1<<10;
                        }
                    }
                }
                if (board[pos + 17] == 0) {
                    if (board[pos + 18] == 0) {
                        if ((used & (1<<7)) == 0) {
                            _num_tries++;
                            used ^= 1<<7;
                            board[pos + 0] = 'v';
                            board[pos + 8] = 'v';
                            board[pos + 16] = 'v';
                            board[pos + 17] = 'v';
                            board[pos + 18] = 'v';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 17] = 0;
                            board[pos + 18] = 0;
                            used ^= 1<<7;
                        }
                    }
                    if (board[pos + 24] == 0) {
                        if ((used & (1<<10)) == 0) {
                            _num_tries++;
                            used ^= 1<<10;
                            board[pos + 0] = 'y';
                            board[pos + 8] = 'y';
                            board[pos + 16] = 'y';
                            board[pos + 17] = 'y';
                            board[pos + 24] = 'y';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 17] = 0;
                            board[pos + 24] = 0;
                            used ^= 1<<10;
                        }
                    }
                    if (board[pos + 25] == 0) {
                        if ((used & (1<<3)) == 0) {
                            _num_tries++;
                            used ^= 1<<3;
                            board[pos + 0] = 'n';
                            board[pos + 8] = 'n';
                            board[pos + 16] = 'n';
                            board[pos + 17] = 'n';
                            board[pos + 25] = 'n';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 17] = 0;
                            board[pos + 25] = 0;
                            used ^= 1<<3;
                        }
                    }
                }
                if (board[pos + 24] == 0) {
                    if (board[pos + 23] == 0) {
                        if ((used & (1<<2)) == 0) {
                            _num_tries++;
                            used ^= 1<<2;
                            board[pos + 0] = 'l';
                            board[pos + 8] = 'l';
                            board[pos + 16] = 'l';
                            board[pos + 24] = 'l';
                            board[pos + 23] = 'l';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 24] = 0;
                            board[pos + 23] = 0;
                            used ^= 1<<2;
                        }
                    }
                    if (board[pos + 25] == 0) {
                        if ((used & (1<<2)) == 0) {
                            _num_tries++;
                            used ^= 1<<2;
                            board[pos + 0] = 'l';
                            board[pos + 8] = 'l';
                            board[pos + 16] = 'l';
                            board[pos + 24] = 'l';
                            board[pos + 25] = 'l';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 24] = 0;
                            board[pos + 25] = 0;
                            used ^= 1<<2;
                        }
                    }
                    if (board[pos + 32] == 0) {
                        if ((used & (1<<1)) == 0) {
                            _num_tries++;
                            used ^= 1<<1;
                            board[pos + 0] = 'i';
                            board[pos + 8] = 'i';
                            board[pos + 16] = 'i';
                            board[pos + 24] = 'i';
                            board[pos + 32] = 'i';
                            solve(board, pos, used);
                            board[pos + 0] = 0;
                            board[pos + 8] = 0;
                            board[pos + 16] = 0;
                            board[pos + 24] = 0;
                            board[pos + 32] = 0;
                            used ^= 1<<1;
                        }
                    }
                }
            }
        }
    }
}
