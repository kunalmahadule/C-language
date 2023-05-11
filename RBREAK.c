#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World\n");
    int age;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        //    if (age > 8)
        //    {
        //        break;
        //    }
        if (age > 8)
        {
            continue;
        }
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("Harry is a good boy\n");
    }

    return 0;
}
