#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{ 
   int a = 6;
   const float b = 2.10;
 // PI=8.54;//cannot do this PI is a constant
   printf("tab character \t\t my backlash \\n %f ",PI);
   //b=60.2;
   //printf("the value of a is %d and the value of b is %.3f\n", a,b);
   //printf("%-112.6f i am black\n",b);
   return 0;
}
