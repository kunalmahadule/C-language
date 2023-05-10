// #include AND #define

#include <stdio.h>
#include "Dpointer.c"
#define PI 3.14
#define SQUARE(r) r*r
int main()
{
    float var = PI;
    int r =4;
    int *ptr = functionDangling();
    printf("This is PI %f\n", var);
    printf("The area of this circle is %f\n", PI*SQUARE(r));

    return 0;
}