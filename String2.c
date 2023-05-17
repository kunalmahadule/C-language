#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "aman";
    // char s1[]="raju";
    char s2[] = "pandu";
    char s3[22];
    printf("The strcmp for s1, s2 returned %d\n ", strcmp(s1, s2));
    // puts(strcat(s1,s2));
    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s2 is %d\n", strlen(s2));
    printf("The reversed string s1 is: ");
    puts(strrev(s1));
    printf("The reversed string s2 is: ");
    puts(strrev(s2));

    printf("The strcpy matter is:\n");
    strcpy(s3, strcat(s1, s2));
    puts(s3);
    return 0;
}

//QICK QUIZ BY HARRY:
// allow user to enter two strings and then concatenate them by saying that str1 is a friend of str2.


//     char s1[90];
//     char s2[90];

//     printf("Enter the string s1\n");
//     gets(s1);

//     printf("Enter the string s2\n");
//     gets(s2);

//     printf("Using puts: \n");
//     // puts(s1);
//     // puts(s2);
//     puts(strcat(s1, s2));


//WS CUBE TECH STRING AND IT`S FUNCTION
// #include <stdio.h>
// #include <string.h>
// int main()
// {
    // 1.strncat : syntax - strncat(s1, s2, n); [n= number of character]
    // char s1[] = "Hattori";
    // char s2[] = "kunal";
    // strncat(s1, s2, 2);
    // printf("%s\n", s1);

    // 2.strncpy : syntax - strncpy(s1, s2, n);
    // char s1[10];
    // char s2[] = "Hattori";
    // strncpy(s1, s2, 2);
    // printf("%s\n", s1);

    // 3.strcmpi() : i = case ko ignore karo small, capital
    // char s1[] = "fresh";
    // char s2[] = "refresh";
    // int i, j, k;
    // i = strcmpi(s1, "FRESH"); //  0 isme case ko ignore kiya hai
    // j = strcmpi(s1, s2);      //-1
    // k = strcmpi(s1, "f");     //1
    // printf("%d %d %d\n", i, j, k);


    //4.strncmp() : syntax - strncmp(s1, s2, n);
    // char s1[] = "Hello";
    // char s2[] = "kunal";
    // int i,j;
    // i = strncmp(s1, "He is a good boy", 2); // [He] same hai 
    // printf("%d\n", i);
    //Output = 0

    //5.strlwr() : syntax - strncmp(s1, s2, n);  //  [lwr] lowercase me convert kar do
    // char str[21];
    // printf("Enter string: ");
    // gets(str);
    // printf("Lower string is : %s\n", strlwr(str));


    // 6.strupr() : syntax - strncmp(s1, s2, n);  //  [upr] uppercase me convert kar do
    // char str[21];
    // printf("Enter string: ");
    // gets(str);
    // printf("Upper string is : %s\n", strupr(str));

    //7.strdup():  excet Duplicate creat kar do string ko
    // char *p1 ="WsCubeTech";
    // char *p2 ;
    // p2 = strdup(p1);
    // printf("Duplicate string is : %s" , p2);
    //Output = WsCubeTech
    // return 0;
// }