#include <stdio.h>
void printstar(char str[])
{
    int i = 0;
    while (str[i] |= '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[63] = "harry";
    char str[43];
    gets(str);
    printf("using custom function printstar\n");
    printstar(str);
    printf("Using printf %s\n", str);
    printf("using puts: \n");
    puts(str);
    
    return 0;
}

    