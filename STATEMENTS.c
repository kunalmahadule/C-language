#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You can vote for lok sabha election\n");
    }
    else if (age < 10)
    {
        printf("You can vote for kids\n");
    }
    else if (age < 5)
    {
        printf("You can vote for babies\n");
    }
    else
    {
        printf("You cannot vote\n");
    }

    return 0;
}
