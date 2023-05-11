#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
    // (n! = n * n! - 1)// Formula for factorial calculation
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want the factorial of \n");
    scanf("%d", &num);

    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}

//Infinite recursive funcion
// #include <stdio.h>
// int main()
// {
//     printf("Hello World\n");
//     main();
//     return 0;
// }
