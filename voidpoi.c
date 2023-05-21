#include <stdio.h>
int main()
{
    int a = 343;
    float b= 4.67;
    void *ptr;
    ptr = &b;
    printf("The value of b is %.2f\n", *((float *)ptr));
    ptr = &a;
    printf("The value of b is %d\n", *((int *)ptr));

    return 0;
}