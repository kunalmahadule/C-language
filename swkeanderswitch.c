#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* HARRY quiz switch ke ander switch program

    */
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);

    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
    switch (marks)
    {
    case 45:
        printf("Your marks are 45\n");
        break;
    
    default:
       printf("Your marks are not 45\n");
       
    } 
       break;
    case 13:
        printf("The age is 13\n");
break;
    case 23:
        printf("The age is 23\n");
break;
    default:
        printf("The age is not 3, 13 & 23");
    }
    return 0;
}
