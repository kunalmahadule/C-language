#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice;
    printf("Enter your choice\n");
    scanf("%d", &choice);

    switch (choice)
    {
        printf("You choose 1st Choice \n");
        break;
    case 2:
        printf("You choose 2st Choice \n");
        break;
    default:
        printf("Default choice\n");
    }
    return 0;
}
