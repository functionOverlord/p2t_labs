//
// Created by mario on 27/02/19.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

#include "turtle.h"

/*
 * turtle drawing shapes
 */

int main(int argc, char *argv[]){
    int n;
    int pixels = 50;

    if (argc < 1) {
        printf("not enough arguments");
        return -1;
    } else if (strcmp(argv[1], "square") == 0) {
        n = 4;
    } else {
        n = *argv[1] - '0'; //convert to int
    }

    //setup
    turtle_init(256, 256);
    turtle_reset();
    turtle_pen_down();

    //draw shape
    for (int i = 0; i < n; i++) {
        turtle_forward(pixels);
        turtle_turn_left(360.0/n);
    }

    //save and close
    turtle_save_png("mylogo.png");
    turtle_cleanup();

    return 0;
}
