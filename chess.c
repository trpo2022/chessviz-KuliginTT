#include <stdio.h>

int main()
{
    char chess_board[9][9]
            = {{' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
               {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
               {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
               {'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};
    for (int k = 8; k >= 0; k--) {
        for (int l = 0; l < 9; l++) {
            printf("%c ", chess_board[k][l]);
        }
        printf("\n");
    }
}