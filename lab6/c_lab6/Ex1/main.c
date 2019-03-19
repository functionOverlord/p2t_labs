#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#include "printpgm.h"
/*
* Mario Geuenich
* 2333820
* create pgm from array
*/

void setup(char map[ROWS][COLS]){
    srand(time(NULL));

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            map[i][j] = rand() % COLOURDEPTH; // assign a random colour in range [0, colourdepth)
        }
    }
}


int main(int argc, char *argv[]) {
    char map[ROWS][COLS];

    if (argc > 1 && strcmp(argv[1], "-h") == 0) { //help message
        printf("program generates pgm image\n");
    } else {
        setup(map);
        writeTextImage(map);
        writeBinaryImage(map);
    }

    return 0;
}