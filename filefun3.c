#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "a+");
    // ptr = fopen("myfile.txt", "r+");
    ptr = fopen("myfile.txt", "w+");
    // char  c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c);

    char str[4];
    fgets(str, 599, ptr);
    printf("The string is %s\n", str);

    // fputc('o',ptr);
    // fputs("hello world",ptr);

    fclose(ptr);
    return 0;
}