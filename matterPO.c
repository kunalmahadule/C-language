#include <stdio.h>
int main()
{
    int a = 76;
    int *ptra = &a;
    printf("The address of pointer to a is %d", &ptra);
    printf("The address of a is %d\n", &a);
    return 0;
}
