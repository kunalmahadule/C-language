#include <stdio.h>
int main()
{
    int a = 29;
    int *ptr = &a;
    int c = 34;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", ptr);
    }
    else
    {
        printf("The pointer is not a null pointer and cannot be dereferenced");
    }

    return 0;
}