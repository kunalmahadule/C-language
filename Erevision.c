#include <stdio.h>
int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_itrative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;  //0 + 1 = 1
        a = b - a; // 1 - 0 = 1
    }

    return a;
}

int main()
{
    int n;
    printf("Enter the index to get fibonacchi series\n");
    scanf("%d", &n);
    printf("The value of fibonacci number at position no %d using itrative approach is %d\n", n, fib_itrative(n));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", n, fib_recursive(n));


    return 0;
}