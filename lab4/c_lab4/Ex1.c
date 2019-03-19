/*
* Mario Geuenich
* 2333820
* Ex1 - refactoring
*/

#include <stdio.h>

int main(void) {

    int i,*myPtr , **myPtrPtr; //myPtrPtr is a pointer to a pointer
    int a[2] = {1,2};
    i = 6;
    myPtr = &i;
    myPtrPtr = &myPtr;

    {
        int i = 7;
        *myPtr = 45;
        printf("The value %d is stored in location %p\n", *myPtr, myPtr);
        printf("The value %d is stored in location %p\n", i, &i);

//        above output:
//        The value 45 is stored in location 0x7ffe7fe63d38
//        The value 7 is stored in location 0x7ffe7fe63d3c

        //  int i overshadows the other i, so i is 7
        // 45 is written to the memory location myPtr points to, so the value of above i will be 45
    }

    printf("The value %d is stored in the location %p\n", **myPtrPtr , *myPtrPtr); // print value pointer of myPtrPtr points to
    printf("The value %d is stored in location %p\n", i, &i);

    printf("a: %p, &a: %p, a[0]: %d, a[1]: %d\n", a, &a, a[0], a[1]);
    // a and &a are the same thing, they are a pointer to the first element in the array
    // the other two are pretty straightforward

    return 0;
}