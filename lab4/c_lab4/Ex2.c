/*
* Mario Geuenich
* 2333820
* Ex2 - factorial
*/

#include <stdio.h>

int factorial(int f) {
    int factorial = f;

    while (f > 1) {
        factorial *= --f;
    }

    return factorial;
}

//  looks like it works without a function prototype, unlike what it stated in the specification
int rfactorial(int f) {
    if (f == 0){
        return 1;
    } else {
        return f * rfactorial(f - 1);
    }
}


int main(int argc, char *argv[]) {

    for (int i = 1; i < argc; i++) { //first arg is program name
        int g = *argv[i] - '0';
        printf("factorial of %d is %d\n", g, factorial(g));
    }

    return 0;
}