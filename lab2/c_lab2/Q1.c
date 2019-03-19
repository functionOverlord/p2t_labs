/*
 * C Lab 2 Exercise 1
 * CLI calculator
 * Mario Geuenich
 *
 */

#include <stdio.h>

int main (void) {
    char op, buffer[100]; //operand and string
    float a, b;
    
    printf("Enter float, character and float\n");
    fgets(buffer , sizeof(buffer), stdin);
    
    // e.g. a = 2.0, op = +, b = 1.0
    sscanf(buffer, "%f %c %f", &a, &op, &b); // scan the string for the format in second argument
    
    float result;
    printf("input: %f %c %f\n", a, op, b);

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("invalid operator");
    }

    printf("Resulf of operation: %.4f\n", result);
    
}