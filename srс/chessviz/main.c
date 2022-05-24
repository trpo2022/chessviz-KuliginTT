#include "../libchessviz/board.h"
#include "chess_move.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <ctest.h>

#define CTEST_MAIN

int per(char x){
    int y;
    if (x == 'a') y = 1;
    if (x == 'b') y = 2;
    if (x == 'c') y = 3;
    if (x == 'd') y = 4;
    if (x == 'e') y = 5;
    if (x == 'f') y = 6;
    if (x == 'g') y = 7;
    if (x == 'h') y = 8;
    return y;
}

int main(){
    int y_start, y_end, x_start, x_end, d1;
    char d, c_x_start, c_x_end;
    int y_s, y_e, x_s, x_e, d2;
    char c_x_s, c_x_e;
    char* board = create_board();
    print_board(board);
    printf("Введите ход в данном фомате.\n");
    printf("e2-e4 e7-e5\n");
    while (1)
    {
        scanf("%c%d%c%c%d %c%d%c%c%d", &c_x_start, &y_start, &d, &c_x_end, &y_end, &c_x_s, &y_s, &d, &c_x_e, &y_e);
        x_start = per(c_x_start);
        x_end = per(c_x_end);
        x_s = per(c_x_s);
        x_e = per(c_x_e);
        if ((x_start > 9) || (y_start > 9) || (x_end > 9) || (y_end > 9) || (x_s > 9) || (y_s > 9) || (x_e > 9) || (y_e > 9)){
            printf("Вы вышли за пределы доски\nВведите ход заново.\n");
            continue;
        }
        d1 = move(board, x_start, y_start, x_end, y_end);
        d2 = move(board, x_s, y_s, x_e, y_e);
        if (!(d1) || !(d2)){
            printf("Вы походили воздухом??.\n Походите фигурой.\n");
        }
        print_board(board);
        printf("Введите ход.\n");
    }
    return 0;
}