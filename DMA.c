#include <stdio.h>
#include <stdlib.h>
int main()
{
    // //Uses of Malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want\n");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));
    // // for (int i = 0; i < n; i++)
    // // {
    // //     printf("Enter the value of no %d element of this arry\n", i);
    // //     scanf("%d", &ptr[i]);
    // // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value of no %d element of this arry is %d\n", i, ptr[i]);
    // }

    //Uses of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of no %d element of this arry\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of no %d element of this arry is %d\n", i, ptr[i]);
    }

    printf("=====================================================\n");

    //Uses of realloc
    printf("Enter the new size of the array you want to creat\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr , n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of no %d element of this arry\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of no %d element of this arry is %d\n", i, ptr[i]);
    }

    free(ptr);
    
    return 0;
}