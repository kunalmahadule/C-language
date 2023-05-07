//FUNCTION POINTER
// sum vala naya option hai dekh lena

#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
void greet()
{
    printf("Hello World my user good morning \n");
}
int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1,2)); //Testing the function
    int (*fptr) (int ,int); //Declaring the function pointer
    fptr = &sum; // Creating a function pointer
    int d = (*fptr)(4,6); //Dereferenceing a function pointer
    printf("The value of d is %d\n", d);
    return 0;
}
