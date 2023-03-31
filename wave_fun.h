
#ifndef SIMULATION_WAVE_FUN_H
#define SIMULATION_WAVE_FUN_H

#include <stdio.h>
#define BL 32
#define LD 187
#define LU 188
#define RU 200
#define RD 201
#define BOARD_SIZE 5
extern unsigned const char ch[5];
typedef struct {
    int collapse;
    char options[5];
} cell;
extern cell board[BOARD_SIZE][BOARD_SIZE];


#endif //SIMULATION_WAVE_FUN_H
