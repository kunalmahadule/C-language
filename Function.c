// #include <stdio.h>
// int sum (int a, int b);
// void printstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", '*');
//     }

// }

// int takenumber()
// {
//     int i;
//     printf("Enter a number\n");
//     scanf("%d", &i);

//     return i;
// }

// int main(int argc, char const *argv[])
// {
//     int a, b, c;
//     a = 8;
//     b = 33;
//     // c = sum(a, b);
//     // printstar (17);
//     c = takenumber();
//     // printf("The value of c is %d \n", c);
//     printf("The number entered is %d \n", c);
//     return 0;
// }

// int sum(int a, int b)
// {
//     return a + b;
// }

//Functions and its types
/*
1.argument hai with return value hai        (done)
2.argument hai with return value no         (done)
3.argument no   with return value hai       (done)
4.argument  no  with return value no        (done)
*/

#include <stdio.h>
#include <string.h>
int sum(int x, int y); //Declaration

void g(void)
{
    printf("Hello World\n");
}
void printGM(int j)
{

    if (j <= 10)
    {
        printf(" Good Morning");
    }
    else
    {
        printf("Good Night\n");
    }
}
int takenumber()
{
    int i;
    printf("Enter the number\n");
    scanf("%d", &i);

    return i;
}
int main()
{
    int num;
    // printf("Enter the num\n");
    // scanf("%d", &num);
    int a = 5, b = 12;
    // printf("The value of a is %d and b is %d\n", a, b);
    // int g = sum(a, b);
    // printf("The value of g is %d", g);
    // g();
    // printGM(num);
    int c = takenumber();
    printf("The value of c is %d", c);
    return 0;
}

int sum(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}