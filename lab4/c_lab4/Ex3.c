#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

/*
* Mario Geuenich
* 2333820
* Ex3 - create pgm image from array
*/

#define ROWS 5
#define COLS 5
#define COLOURDEPTH 255

void setup(int map[ROWS][COLS]){
    srand(time(NULL));

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            map[i][j] = rand() % COLOURDEPTH;
        }
    }
}

void out(int map[ROWS][COLS]){
    //pgm header
    printf("P2 %d %d %d\n", ROWS, COLS, COLOURDEPTH);

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

}

int main(int argc, char *argv[]) {
    int map[ROWS][COLS];

    if (argc > 1 && strcmp(argv[1], "-h") == 0) { //help message
        printf("program generates pgm image\n");
    } else {
        setup(map);
        out(map);
    }

    return 0;
}