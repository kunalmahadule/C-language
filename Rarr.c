#include <stdio.h>
int main()
{
    int marks[2][4] = {{32,4,9,20},
                        {5,65,8,44}};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("\%d", &marks[i]);

    // }
    
    for (int i = 0; i < 2; i++)
    {
        
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    









    // marks[0] = 23;
    // printf("marks of student 1 is %d\n", marks[0]);
    // marks[0] = 63;
    // marks[1] = 212;
    // marks[2] = 44;
    // printf("marks of student 1 is %d\n", marks[2]);
    
    return 0;
}