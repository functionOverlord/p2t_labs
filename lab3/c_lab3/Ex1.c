#include <stdio.h>

/*
* Mario Geuenich
* 2333820
* Ex1 - create pgm image from array
*/

int main(void) {

    //pgm header
    printf("P2 5 5 15\n");

    // rest of image
    unsigned char map[5][5] = {
        {1,5,1,15,0},
        {1,5,1,15,0},
        {1,5,1,15,15},
        {1,5,1,0,0},
        {1,5,1,0,0}
    };

    for (int i = 0; i < 5; i++) { //rows
        for (int j = 0; j < 5; j++) { //col
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}