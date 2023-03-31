#include "wave_fun.h"

void init_board(cell b[BOARD_SIZE][BOARD_SIZE]){
    for (int i = 0;i < BOARD_SIZE;  i++) {
        for (int j = 0;j < BOARD_SIZE;j++) {
            b[i][j].collapse = 0;
            b[i][j].options = {BL, LD, LU, RU, RD};
        }
    }
}