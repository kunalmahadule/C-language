# include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    int a= 67;
    const float b= 7.90;
    printf("my new class\\t mr.black \n \a %.2f",PI);
    //b= 3.9;// cannot do this b is a constant
    //printf("%-130.5f height\n",b);
    return 0;
}
 