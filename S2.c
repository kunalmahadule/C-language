#include <stdio.h>
int main(int argc, char const *argv[])
{
    int science, maths;
    printf("Enter your science marks\n");
    scanf("%d", &science);

    printf("Enter your maths marks\n");
    scanf("%d", &maths);

    if (science, maths >= 50)
    {
        printf("You will pass both exams science and maths\n");
    }
    else if (science, maths >= 50)
    {
        printf("You are between 50 to 100 our gift is 45$ gift\n");
    }
    else if (science >= 50)
    {
        printf("You are score 50 for science exam our gift is 15$ gift\n");
    }
    else if (maths >= 50)
    {
        printf("You are score 50 for maths exam our gift is 15$ gift\n");
    }
    else
    {
        printf("You are fail\n");
    }
    return 0;
}
