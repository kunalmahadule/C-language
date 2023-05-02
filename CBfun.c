//CALLBACK FUNCTION 
//function pointer ka syntax yaad rakho bus [int (*ptr)(int,int);]
//in dono function ko hum baad me bhi call kar sakte hai karke hum is ko callback function bolte hai (bar bar call kar sakte hai)
#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
int greetHelloAndExecute(int (*fptr)(int ,int))
{
    printf("Hello User\n");
    printf("The sum of 4 and 2 is %d\n", fptr(4,2));
}

int greetGmAndExecute(int(*fptr)(int,int)){
    printf("Good Morning User\n"); 
    printf("The sum of 8 and 2 is %d\n", fptr(8,2));
}
int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    // greetHelloAndExecute(ptr);
    greetGmAndExecute(ptr);
    return 0;
}