/*
 * C Lab 2 Exercise 3
 * squarefree
 * Mario Geuenich
 *
 */

#include <stdio.h>
#include <stdbool.h>

// return true if n is squarefree
bool isSquareFree(int n) {
    int i = 2;
    while (n % i*i != 0) {
        i++;
        if (i*i >= n) {
            return true;
        }
    }
    return false;
}


int main (void) {
    while (true) {
        // require user input and test if squarefree
        printf("enter number\n");
        int n;
        scanf(" %d", &n);

        if (isSquareFree(n)) {
            printf("squarefree\n");
        } else {
            printf("not squarefree\n");
        }

        // ask if user wants to continue
        char b;
        printf("break?, y/n: ");
        scanf(" %c", &b);

        if (b == 'y') {
            break;
        }
    }
}

