#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 37;
    int *ptr = &a;

    // pointer arithmetic
    ptr++;
    printf("The address of ptr is %d\n", &ptr);

    
    
    
    // printf("The address of a is %d\n", &a);
    // printf("The value of a is %d\n", *ptr);
    // printf("The value of a is %d\n", a);

    
    // int **dptr = &ptr;

    // printf("The address of ptr is %d\n", &ptr);
    // printf("The value of ptr is %d\n", *dptr);
    // printf("The value of a is %d\n", **dptr);
    // printf("The address of dptr is %d\n", &dptr);




    return 0;
}