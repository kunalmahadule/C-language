#include <stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    /* This is a new line charactor



    This is ignored by a compiler
    */
    int a = 66;
    const float b = 8.9;
    //b= 55.2;// cannot do this since b is a constant 
    //printf("The value of a is %d and the value of b is %f \n",  a, b);
    //printf("%-11.3f hello jee\n", b);
    printf("tab character \t\t %f my backlash \a\a", PI);

    return 0;
}
