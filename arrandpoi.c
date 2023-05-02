#include <stdio.h>
int main()
{
    //     char a = '3';
    //     char* ptra = &a; 
    //     printf("%d\n", ptra-2);
    //     ptra--;
    //     printf("%d\n", ptra);
    //     printf("%d", ptra-2);

    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("Value at position 6 of the array %d\n", arr[6]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of first element of the array is %d\n", arr);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n", arr + 1);

    printf("Value at position 6 of the array %d\n", arr[6]);
    printf("The address of first element of the array is %d\n", *(&arr[0]));
    printf("The address of first element of the array is %d\n", arr[0]);
    printf("The address of first element of the array is %d\n", *(arr));
    printf("The address of second element of the array is %d\n", *(&arr[1]));
    printf("The address of second element of the array is %d\n", arr[1]);
    printf("The address of second element of the array is %d\n", *(arr + 1));

    return 0;
}