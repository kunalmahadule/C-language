#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        /* code */
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    printf("Enter 1 for triangular star pattern type and 0 for reversed triangular star pattern type\n");
    scanf("%d", &type);
  
    switch (type)
    {
    case 1:
        starpattern(rows);
        break;
    case 0:
        reversestarpattern(rows);
    default:
        printf("You have entered an Invalid choice\n");
        break;
    }
    return 0;
}
