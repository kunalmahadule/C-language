#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);
    switch (age)
    {
    case 3:
        printf("Your age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45\n");
            break;

        default:
            printf("Your marks are not 45\n");
            break;
        }
        break;
    case 13:
        printf("Your age is 13\n");
        break;
    case 23:
        printf("Your age is 23\n");
        break;
    default:
        printf("age is not 3, 13 or 23\n");
        printf("age is only integer not character & point value\n");
    }
    return 0;
}


// //Switch statement
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int HeadShot, Rank;
//     printf("WISH YOU HAPPY CHRISTMASL\n");
//     printf("HELLO PUBG PLAYERS\n");
//     printf("Enter the no. of HeadShot to win Title\n");
//     scanf("%d", &HeadShot);

//     printf("Enter the no. of Rank to win Title\n");
//     scanf("%d", &Rank);
//     switch (HeadShot)
//     {
//     case 100:
//         printf("You kill %d enemy by Headshot\n", HeadShot);
//         switch (Rank)
//         {
//         case 50:
//             printf("You rank is %d You are Legand in this Title\n", Rank);
//             break;
//         }
//         break;

//     default:
//         printf("You are noob\n");
//     }

//     return 0;
// }
