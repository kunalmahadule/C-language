#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[84] ;//= "75 This content was produced by filefunc2.c";

    //  ********Reading a file********
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The content of this file has %s\n", string);
    

   
   
    //  ********Writing a file********
    // ptr = fopen("myfile.txt", "w");
    // // ptr = fopen("myfile.txt", "a");
    // fprintf(ptr, "%s", string);

    return 0;
}
