#include <stdio.h>
int main()
{
    // int a = 34;
    // int* ptra = &a;
    // ptra --;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra+1);

    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    // printf("Value at position 6 of the array is %d\n", arr[6]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of first element of the array is %d\n", arr);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n", arr + 1);

    // printf("The address of first element of the array is %d\n", *(&arr[0]));
    // printf("The address of first element of the array is %d\n", *(arr));
    // printf("The address of first element of the array is %d\n", arr[0]);

    // printf("The address of second element of the array is %d\n", *(&arr[1]));
    // printf("The address of second element of the array is %d\n", *(arr + 1));
    // printf("The address of second element of the array is %d\n", arr[1]);

    return 0;
}