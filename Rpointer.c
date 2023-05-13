// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a = 76;
//     int *ptra = &a;
//     printf("The address of pointer to a is %d\n", &ptra);
//     printf("The address of a is %d\n", &a);
//     printf("The address of a is %d\n", ptra);
//     printf("The value of a is %d\n", *ptra);
//     printf("The value of a is %d\n", a);

//     return 0;
// }
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 77;
    int *ptra = &a;
    
    printf("The address of pointer to a is %x\n", &ptra);
    printf("The address of a is %x\n", &a);
    printf("The address of a is %x\n", ptra);
    printf("The value of a is %x\n", *ptra);
    printf("The value of a is %x\n", a);
    return 0;
}
