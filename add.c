# include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c =(a+b);

    printf("Enter number a\n");
    scanf("%d", &a);

    printf("Enter number b\n");
    scanf("%d", &b);

    printf("The value of c is %d", a+b);
    return 0;
}
