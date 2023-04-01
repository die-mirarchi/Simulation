#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-msc50-cpp"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#define BOARD_SIZE 10

// " " - "╗" - "╝" - "╚" - "╔"
const wint_t tiles[] = {0x0020, 0x2557,0x255D,0x255A,0x2554};

typedef struct {
    int collapse;
    int options[5];
} cell;


void init_board(cell b[BOARD_SIZE][BOARD_SIZE]);
int pick_random(int const arr[]);
void draw_board(cell b[BOARD_SIZE][BOARD_SIZE]);
int main() {
    setlocale(LC_CTYPE, "");
    srand((unsigned)time(NULL)); // NOLINT(cert-msc51-cpp)
    cell board[BOARD_SIZE][BOARD_SIZE];
    init_board(board);
    draw_board(board);

    return 0;
}

void init_board(cell b[BOARD_SIZE][BOARD_SIZE]){
    for (int i = 0;i < BOARD_SIZE;  i++) {
        for (int j = 0;j < BOARD_SIZE;j++) {
            b[i][j].collapse = 0;
            for (int k = 0; k < 5; ++k) {
                b[i][j].options[k] = k;
            }
        }
    }
}
int pick_random(int const arr[]){
    int r = rand() % 5;
    while (1){
        if (arr[r] < 0){
            r=rand()%5;
        } else{
            return arr[r];
        }
    }
}
void draw_board(cell b[BOARD_SIZE][BOARD_SIZE]){
    for (int i = 0;i < BOARD_SIZE;  i++) {
        for (int j = 0;j < BOARD_SIZE;j++) {
            printf("%lc",tiles[pick_random(b[i][j].options)]);
        }
        printf("\n");
    }
}


#pragma clang diagnostic pop