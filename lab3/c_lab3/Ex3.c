/*
* Mario Geuenich
* 2333820
* Ex3 - structs
*/

#include <stdio.h>

struct TwoDPoint {
    double x, y;
};

int main(void) {
    struct TwoDPoint a, b = {0.0 ,0.0}; // the previous name did not match any type, and "struct" had to be added

    // the input is in a separate block to limit the scope of input
    // this is not necessary though, and there is no problem to removing the block
    {
        char input [100];
        puts("Please enter the x and y coordinates of the 1st point, separated by a comma.");
        fgets(input , sizeof(input), stdin);
        sscanf(input ,"%lf,%lf", &(a.x), &(a.y)); // sscanf expects a pointer, and not a.y. format specifier of lf required as we are looking for doubles
        puts("Please enter the x and y coordinates of the 2nd point, separated by a comma.");
        fgets(input , sizeof(input), stdin);
        sscanf(input ,"%lf ,%lf", &(b.x), &(b.y));
    }
    double x_dist = (a.x - b.x), y_dist = (a.y - b.y);
    printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));

    return 0;
}