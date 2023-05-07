//FILE FUNCTION COMBINE
// Ye file mode and function ke combo file hai
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // FILE *ptr = NULL;
    // char string[500] = "hello pokemon";

    // ******Reading a file******
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s", string);
    // printf("The content of this file is %s\n", string);

    // ******Writing a file******
    // ptr = fopen("myfile.txt","w");
    // fprintf(ptr, "%s", string);

    // ******Append mode a file******
    // ptr = fopen("myfile.txt","a");
    // fprintf(ptr, "%s", string);

    FILE *ptr = NULL;
    // ******File ke Character ko read karne ke liye******
    // ptr = fopen("myfile.txt", "r");
    // char c = fgetc(ptr);
    // printf("The character i read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character i read was %c\n", c);
   
    // ******File ke String ko read karne ke liye******
    // char str[5];
    // fgets(str, 10, ptr);
    // printf("The string I read was %s\n", str);
    
    ptr = fopen("myfile.txt", "w");
    
    // ******File me Character or String ko put karne ke liye******
     fputc('k',ptr);
    fputs("hi raju", ptr);

    

    fclose(ptr);

    return 0;
}