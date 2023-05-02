#include <stdio.h>
// BREAK : condition -jab age 10 se bada honga tab break kar do(matlab aabhi vo input nahi lenga vo break ho jayega age 10 se bade ho gaye to)(agar age 10 se chote hai to vo input lete rahenga )
int main()
{
    printf("Hello World\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        if (age > 10)
        {
            break;
        }
        //     if (age > 10)
        //     {
        //         continue;
        //     }
        //     printf("we have not come accross any continue statements\n");
        //     printf("we have not come accross any continue statements\n");
        //     printf("we have not come accross any continue statements\n");
        //     printf("we have not come accross any continue statements\n");
        //     printf("Tom is a good boy\n");
        
        return 0;
    }
}