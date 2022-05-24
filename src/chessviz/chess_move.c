#include "chess_move.h"

int move(char* board, int s_x, int s_y, int e_x, int e_y){
    char piece;
    piece = board[s_y * 9 + s_x];
    if (piece == ' ') return 0;
    board[s_y * 9 + s_x] = ' ';
    board[e_y * 9 + e_x] = piece;
    return 1;
}