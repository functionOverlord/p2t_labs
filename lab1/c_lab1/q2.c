#include <stdio.h>

int main(void) {
    const int c = 5;

    printf("%3d\n", 2 + c);
    printf("%3d\n", 2 - c);
    printf("%3d\n", 4 * c);
    printf("%.2f\n", 1 / 2.0);
    printf("%3d\n", c % 3);

    return 0;
}