#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

/*
* Mario Geuenich
* 2333820
* Ex2 - strings
*/

int main(void) {

    char string[100];
    fgets(string, sizeof string, stdin);
    unsigned int n = strlen(string) - 1;

    //print string length
    printf("string length: %d\n", n);

    //make lowercase
    bool isUpper = false;
    for (int i = 0; i < n; i++) {
        if (isupper(string[i])) {
            string[i] = tolower(string[i]);
            isUpper = true;
        }
    }

    // notify user about making lowercase
    if (!isUpper) {
        printf("string was lowercase\n");
    } else {
        for (int i = 0; i < n; i++){
            printf("%c", string[i]);
        }
        printf("\n");
    }

    return 0;
}
