#include <stdio.h>

void changevalue(int* address)
{
     *address = 328;
}
int main()
{
    int a = 34, b = 74;
    printf("The value of a now is %d\n", a);
    changevalue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
}

// #include <stdio.h>

// void sum(int *a)
// {
//     *a = 7;
// }
// void substract(int *b)
// {
//     *b = 1;
// }

// int main()
// {
//     int a = 4, b = 3;
//     printf("The value of a is %d\n", a);
//     printf("The value of b is %d", b);
//     void sum(int* a);
//     void substract(int* b);
    
//     return 0;
// }
