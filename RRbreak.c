#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter the age\n", i);
        scanf("%d", &age);
        //     if (age < 10)
        //     {
        //         break;
        //     }
        // }
        // }
        if (age > 10)
        {
            continue;
        }
        printf("hello my name is pandu\n");
        printf("hello my name is pandu\n");
        printf("hello my name is pandu\n");
        printf("hello my name is pandu\n");
        printf("hello my name is pandu\n");
        return 0;
    }
}