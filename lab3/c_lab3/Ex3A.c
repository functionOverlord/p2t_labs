/*
* Mario Geuenich
* 2333820
* Ex3 - structs
*/

#include <stdio.h>

struct TwoDPoint {
    double x, y;
};

void readStruct(int n, struct TwoDPoint *twoDPoint) {
    char input[100];
    printf("Please enter the x and y coordinates of point %d, separated by a comma: ", n);
    fgets(input , sizeof(input), stdin);
    sscanf(input ,"%lf,%lf", &twoDPoint->x, &(*twoDPoint).y); //dereference, access x/y, and get a reference to that
}

int main(void) {
    struct TwoDPoint st[2] = {0.0 ,0.0};

    readStruct(1, &st[0]); //pass a reference to the struct
    readStruct(2, &st[1]);

    double x_dist = (st[0].x - st[1].x), y_dist = (st[0].y - st[1].y);
    printf("The square of the distance between the two points is: %.3f\n", (x_dist*x_dist)+(y_dist*y_dist));

    return 0;
}