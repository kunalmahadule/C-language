//Various input output predefined functions

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // char open;
    // printf("Enter the character\n");        // getchar() and putchar()
    // // scanf("%c", &open);
    // open = getchar();
    // // printf("The character entered is %c\n", open);
    // printf("Using puts\n");
    // putchar(open);

    // char str[5];
    // char *ptr = str;
    // ptr = (char	*)malloc(7 * sizeof(char));
    // printf("Enter the string\n");        // gets() and puts()
    // // scanf("%s", str);        // & nahi bhi lagaya to chalanga
    // gets(str);
    // printf("Entered string is : %s\n", str);
    // printf("Using puts : ");
    // puts(str);

    // getch() getche() getchar() //teeno he character orianted function

    char a, b, c;

    printf("\n Enter the character a using (getch()): ");
    a = getch();

    printf("\n Enter the character b using (getche()): ");
    b = getche();

    printf("\n Enter the character c using (getchar()): ");
    c = getchar();

    printf("%c %c %c", a, b, c);
    return 0;
}
