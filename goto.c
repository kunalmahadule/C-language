#include <stdio.h>
int main(int argc, char const *argv[])
{
    //     lable:
    //             printf("we are inside lable");
    //             goto end;
    //             printf("Hello World");
    //             goto lable;
    //             end:
    //                 printf("We are at end");
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    end:

        return 0;
    }
}
//FOR BETTER UNDERSTANDING SEE THIS [form WS Cube Tech]

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     printf("Hello student Aman\n");
//     printf("Hello student Gulshan\n");
//     printf("Hello student Kunal\n");
//     goto hello;
//     printf("Hello student Ram\n");
//     printf("Hello student Shyam\n");
//     printf("Hello student Raju\n");
//     hello:
//     printf("Hello student Naitik\n");

//     return 0;
// }