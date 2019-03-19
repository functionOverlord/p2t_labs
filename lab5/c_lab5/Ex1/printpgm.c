
#include <stdio.h>

#include "printpgm.h"

/*
* Mario Geuenich
* 2333820
* Ex1 - writ pgm image to stdout
*/
void printImage(int map[ROWS][COLS]){
    //pgm header
    printf("P2 %d %d %d\n", ROWS, COLS, COLOURDEPTH);

    //pgm body
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

}