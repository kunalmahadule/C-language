// Dangling Pointer

#include <stdio.h>
#include <stdlib.h>
int sum;
int* functionDangling()
{
    int a, b, sum2;
    a = 4;
    b = 6;
    sum = a + b;
    return &sum;
}
int main2()
{
    // case1: De allocation of a memory
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 333;
    ptr[2] = 76;
    ptr[3] = 9;
    free(ptr); // ptr is now a dangling pointer

    // case2: Function returning local variable address
    int *dangPtr = functionDangling(); //dangPtr is now a dangling pointer

    int *danglingPtr3;
    //case3: Variable going out of scope
    {
        int a = 12;

        danglingPtr3 = &a;
    } // Here variable goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer

    return 0;
}
