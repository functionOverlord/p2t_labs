
#include <stdio.h>

#include "printpgm.h"

/*
* Mario Geuenich
* 2333820
* write pgm image to a file
*/
void writeTextImage(char map[ROWS][COLS]){
    FILE *fp_output = fopen("textImage.pgm", "w");

    //pgm header
    fprintf(fp_output, "P2 %d %d %d\n", ROWS, COLS, COLOURDEPTH);

    //pgm body
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            fprintf(fp_output, "%d ", map[i][j]);
        }
        fprintf(fp_output, "\n");
    }
}

// binary image is significantly smaller in size than the text image
// drawback: not possible to read image content as is the case with text version
void writeBinaryImage(char map[ROWS][COLS]){
    FILE *fp_output = fopen("binaryImage.pgm", "wb");

    //pgm header
    fprintf(fp_output, "P5 %d %d %d\n", ROWS, COLS, COLOURDEPTH);

    //pgm body
    for (int i = 0; i < ROWS; i++) {
        fwrite(map[i], 1, COLS, fp_output);
    }
}