#include <stdio.h> // to print without warnings

int k = 4; // global variable, always visible unless overshadowed

int main(void) {

    // variables visible in main function
    int i = 50;
    unsigned int j = i * 2;
    double k = 1.0; // missing semicolon

    {
        float i = 5.0; // overshadowing previous i
        printf("The value of i is %3f\n", i);
        k = i * j; // new value of k
        i *= 6; // overshadowed and scaled by 6
    }

//    double j; // has to be removed as j is already declared as a different type in the same scope

    i = k + i; // k = 500, i = 50 because k was reassigned in the previous block, but i was merely overshadowed
    printf("Now, the value of i is %d\n", i);

    return 0;
}
