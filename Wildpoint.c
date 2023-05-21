// WILD POINTER

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 232;
    int *ptr; //This is a wild pointer
    // *ptr = 32; //This is not a good thing to do
    ptr = &a; //ptr is no longer wild
    printf("The value of a is %d\n", *ptr);
    return 0;
}
