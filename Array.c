// REAL FILE
// Array ek he data type ke bahut sare member ko jod ke rakhta hai

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks[2][4] = {{23, 34, 90, 321},
                       {2, 54, 51, 77}};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        printf("The value of %d element of the arrry is %d\n", i, marks[i]);

        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d,%d element of the array is %d\n",i, j, marks[i], marks[j]);
            // printf("%d ", marks[i][j]);
            // scanf("%d ", marks[i],marks[j]);
        }

        // printf("\n");
    }

    // marks[0] = 55;
    // printf("Marks of student 1 is %d.\n", marks[0]);
    // marks[0] = 95;
    // marks[1] = 775;
    // marks[2] = 12;
    // marks[3] = 59;
    // printf("Marks of student 0 is %d.\n", marks[0]);
    // printf("Marks of student 1 is %d.\n", marks[1]);
    // printf("Marks of student 2 is %d.\n", marks[2]);
    // printf("Marks of student 3 is %d.\n", marks[3]);

    return 0;
}
