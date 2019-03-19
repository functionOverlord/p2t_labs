/*
 * C Lab 2 Exercise 2
 * CLI Green Bottles
 * Mario Geuenich
 *
 */

#include <stdio.h>

int main (void) {

    printf("enter 0 < some int < 100: ");
    char buffer[100];
    fgets(buffer , sizeof(buffer), stdin);
    
    int i;
    sscanf(buffer, "%d", &i);

    while (i > 0 && i < 100) {
        printf("%d Green Bottles, sitting on the wall\n", i);
        printf("%d Green Bottles, sitting on the wall\n", i);
        printf("and if 1 Green Bottle should accidentally fall...\n\n");
        i--;
    }
    printf("no Green Bottles");
   
}