#include <stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}
int takenumber ()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    
    return i;
}
int main(int argc, char const *argv[])
{
    int a, b, c;
    a = 8;
    b = 33;
    // c = sum(a, b);
    // printstar(1);
    c = takenumber();
    // printf("The value of c is %d\n", c);
     printf("The number entered is %d\n", c);
    
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}