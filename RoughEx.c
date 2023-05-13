// // // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // // #include <string.h>
// // // // // // // // // // // // // // struct Student
// // // // // // // // // // // // // // {
// // // // // // // // // // // // // //     int id;
// // // // // // // // // // // // // //     int marks;
// // // // // // // // // // // // // //     char fav_char;
// // // // // // // // // // // // // //     char name[34];
// // // // // // // // // // // // // // };

// // // // // // // // // // // // // // struct Student moto, loto, pito;
// // // // // // // // // // // // // // void print()
// // // // // // // // // // // // // // {
// // // // // // // // // // // // // //     printf("pito fav_char is %c", pito.fav_char);
// // // // // // // // // // // // // // }

// // // // // // // // // // // // // // int main()
// // // // // // // // // // // // // // {
// // // // // // // // // // // // // //     moto.id = 9761;
// // // // // // // // // // // // // //     loto.id = 2;
// // // // // // // // // // // // // //     pito.id = 3;
// // // // // // // // // // // // // //     moto.marks = 75;
// // // // // // // // // // // // // //     loto.marks = 55;
// // // // // // // // // // // // // //     pito.marks = 68;
// // // // // // // // // // // // // //     moto.fav_char = 'e';
// // // // // // // // // // // // // //     loto.fav_char = 'k';
// // // // // // // // // // // // // //     pito.fav_char = 'o';
// // // // // // // // // // // // // //     // strcpy(moto.name, "MOTO SINGH");
// // // // // // // // // // // // // //     // strcpy(loto.name, "LOTO SHARMA");
// // // // // // // // // // // // // //     // strcpy(pito.name, "PITO JEE");
// // // // // // // // // // // // // //     // printf("The pito favorite char is %c \n",pito.fav_char);

// // // // // // // // // // // // // //     // printf("moto got %d marks \n", moto.marks);
// // // // // // // // // // // // // //     // printf("moto name is: %s \n", moto.name);
// // // // // // // // // // // // // //     // printf("loto got %d marks \n", loto.marks);
// // // // // // // // // // // // // //     // printf("loto name is: %s \n", loto.name);
// // // // // // // // // // // // // //     // printf("pito got %d marks \n", pito.marks);
// // // // // // // // // // // // // //     // printf("moto name is: %s \n", moto.name);

// // // // // // // // // // // // // //     printf("moto id is %d\n", moto.id);

// // // // // // // // // // // // // //     print();

// // // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // }

// // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // void starpattern(int rows)
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     for (int i = 0; i < rows; i++)
// // // // // // // // // // // // //     {
// // // // // // // // // // // // //         for (int j = 0; j <= rows - i - 1; j++)
// // // // // // // // // // // // //         {
// // // // // // // // // // // // //             printf("*");
// // // // // // // // // // // // //         }
// // // // // // // // // // // // //         printf("\n");
// // // // // // // // // // // // //     }
// // // // // // // // // // // // // }

// // // // // // // // // // // // // void reversestarpattern(int rows)
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     for (int i = 0; i < rows; i++)
// // // // // // // // // // // // //     {
// // // // // // // // // // // // //         for (int j = 0; j <= rows - i - 1; j++)
// // // // // // // // // // // // //         {
// // // // // // // // // // // // //             printf("*");
// // // // // // // // // // // // //         }
// // // // // // // // // // // // //         printf("\n");
// // // // // // // // // // // // //     }
// // // // // // // // // // // // // }

// // // // // // // // // // // // // int main()
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     int rows, type;
// // // // // // // // // // // // //     printf("How many rows do you want\n");
// // // // // // // // // // // // //     scanf("%d", &rows);

// // // // // // // // // // // // //     printf("Enter 0 for star pattern type and 1 for reverse star pattern type\n");
// // // // // // // // // // // // //     scanf("%d", &type);

// // // // // // // // // // // // //     switch (type)
// // // // // // // // // // // // //     {
// // // // // // // // // // // // //     case 0:
// // // // // // // // // // // // //         starpattern(rows);
// // // // // // // // // // // // //         break;

// // // // // // // // // // // // //     case 1:
// // // // // // // // // // // // //         reversestarpattern(rows);

// // // // // // // // // // // // //     default:
// // // // // // // // // // // // //         printf("You have entered Invalid choice\n");
// // // // // // // // // // // // //         break;
// // // // // // // // // // // // //     }
// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }

// // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // void printstar(char str[])
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     int i = 0;
// // // // // // // // // // // // //     while (str[i] |= '\0')
// // // // // // // // // // // // //     {
// // // // // // // // // // // // //         printf("%c", str[i]);
// // // // // // // // // // // // //         i++;
// // // // // // // // // // // // //     }
// // // // // // // // // // // // //     printf("\n");
// // // // // // // // // // // // // }
// // // // // // // // // // // // // int main()
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
// // // // // // // // // // // // //     char str[9] = "harry";
// // // // // // // // // // // // //     gets(str);
// // // // // // // // // // // // //     printf("Using custom function printstar\n");
// // // // // // // // // // // // //     printstar(str);
// // // // // // // // // // // // //     printf("Using printf %s\n", str);
// // // // // // // // // // // // //     printf("Using puts :\n");
// // // // // // // // // // // // //     puts(str);

// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }

// // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // #include <string.h>
// // // // // // // // // // // // int main()
// // // // // // // // // // // // {
// // // // // // // // // // // //     char s1[] = "RIRJU";
// // // // // // // // // // // //     char s2[] = "BAM";
// // // // // // // // // // // //     char s3[232];
// // // // // // // // // // // //     // puts(strcat(s1,s2));
// // // // // // // // // // // //     printf("The strcmp for s1, s2 returned %d\n", strcmp(s1,s2));
// // // // // // // // // // // //     printf("The length of s1 is %d\n", strlen(s1));
// // // // // // // // // // // //     printf("The length of s2 is %d\n", strlen(s2));
// // // // // // // // // // // //     printf("The reverse string s1 is : \n");
// // // // // // // // // // // //     puts(strrev(s1));
// // // // // // // // // // // //     printf("The reverse string s2 is : \n");
// // // // // // // // // // // //     puts(strrev(s2));
// // // // // // // // // // // //     printf("The strcpy matter is : \n");
// // // // // // // // // // // //     strcpy(s3, strcat(s1, s2));
// // // // // // // // // // // //     puts(s3);
// // // // // // // // // // // //     return 0;
// // // // // // // // // // // // }

// // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // #include <string.h>
// // // // // // // // // // // struct Student
// // // // // // // // // // // {
// // // // // // // // // // //     int id;
// // // // // // // // // // //     int marks;
// // // // // // // // // // //     char fav_char;
// // // // // // // // // // //     char name[23];
// // // // // // // // // // // }monu, ramu, raju;
// // // // // // // // // // // // struct Student ;
// // // // // // // // // // // void print()
// // // // // // // // // // // {
// // // // // // // // // // //     printf("monu name is %s\n", monu.name);
// // // // // // // // // // // }

// // // // // // // // // // // int main()
// // // // // // // // // // // {
// // // // // // // // // // //     monu.id = 12;
// // // // // // // // // // //     ramu.id = 1;
// // // // // // // // // // //     raju.id = 132;
// // // // // // // // // // //     monu.marks = 44;
// // // // // // // // // // //     ramu.marks = 23;
// // // // // // // // // // //     raju.marks = 12;
// // // // // // // // // // //     monu.fav_char = 'd';
// // // // // // // // // // //     ramu.fav_char = 's';
// // // // // // // // // // //     raju.fav_char = 'o';
// // // // // // // // // // //     strcpy(monu.name, "monu jha");
// // // // // // // // // // //     printf("monu id is %d\n", monu.id);
// // // // // // // // // // //     // printf("monu name is %s\n", monu.name);
// // // // // // // // // // //     print();
// // // // // // // // // // //     return 0;
// // // // // // // // // // // }
// // // // // // // // // // #include <stdio.h>
// // // // // // // // // // typedef struct Student
// // // // // // // // // // {
// // // // // // // // // //     int id;
// // // // // // // // // //     int marks;
// // // // // // // // // //     char fav_char;
// // // // // // // // // //     char name[23];
// // // // // // // // // // }std;
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     int *a;
// // // // // // // // // //     int b;
// // // // // // // // // //     typedef int* intpointer;
// // // // // // // // // //     int c = 89;
// // // // // // // // // //     a = &c;
// // // // // // // // // //     b = c;
// // // // // // // // // //     printf("a is %d\n", a);
// // // // // // // // // //     printf("%d", b);
// // // // // // // // // //     // std s1, s2;
// // // // // // // // // //     // s1.id = 18372;
// // // // // // // // // //     // s2.id = 2;
// // // // // // // // // //     // printf("LETS GO TO VISUAL STDIO STDIO CODE:-\n");
// // // // // // // // // //     // printf("1) The s1`s id is %d.\n", s1.id);
// // // // // // // // // //     // printf("2) The s2`s id is %d.\n", s2.id);

// // // // // // // // // // typedef long ul;
// // // // // // // // // //     // typedef int integer ;
// // // // // // // // // // u1 = 32;
// // // // // // // // // //     // ul u1,u2,u3;
// // // // // // // // // //     // integer a = 4;
// // // // // // // // // // printf("The value of u1 is  ", u1);
// // // // // // // // // // return 0;
// // // // // // // // // // }
// // // // // // // // // // // typedef <previous name> _<alias name>

// // // // // // // // // #include <stdio.h>
// // // // // // // // // #include <string.h>
// // // // // // // // // union Student
// // // // // // // // // {
// // // // // // // // //     int id;
// // // // // // // // //     int marks;
// // // // // // // // //     char fav_char;
// // // // // // // // //     char name[23];
// // // // // // // // // };
// // // // // // // // // int main()
// // // // // // // // // {

// // // // // // // // //     union Student s1;
// // // // // // // // //     s1.fav_char = 'p';
// // // // // // // // //     s1.id = 4;
// // // // // // // // //     s1.marks = 65;
// // // // // // // // //     strcpy(s1.name, "BALRAM");

// // // // // // // // //     printf("The id is %d \n", s1.id);
// // // // // // // // //     printf("The marks is %d \n", s1.marks);
// // // // // // // // //     printf("The fav_char is %c\n", s1.fav_char);
// // // // // // // // //     printf("The name is %s\n", s1.name);
// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // //    "||      ||NION"
// // // // // // // // // //     ||      ||
// // // // // // // // // //     ||      ||
// // // // // // // // // //     ||      ||
// // // // // // // // // //      || || ||
// // // // // // // // // // VOID POINTER
// // // // // // // // // #include <stdio.h>
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     int a = 34;
// // // // // // // // //     float b = 2.1;
// // // // // // // // //     char c = 'o';
// // // // // // // // //     void *ptr;
// // // // // // // // //     ptr = &a;
// // // // // // // // //     printf("The value of int a is %d\n", *((int *)ptr));
// // // // // // // // //     ptr = &b;
// // // // // // // // //     printf("The value of float b is %f\n", *((float *)ptr));
// // // // // // // // //     ptr = &c;
// // // // // // // // //     printf("The value of charactor c is %c\n", *((char *)ptr));
// // // // // // // // //     return 0;
// // // // // // // // // }
// // // // // // // // // NULL POINTER

// // // // // // // // // #include <stdio.h>
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     int a = 34;
// // // // // // // // //     int *ptr =&a ;
// // // // // // // // //     int c = 68;
// // // // // // // // //     if (ptr != NULL)
// // // // // // // // //     {
// // // // // // // // //         printf("The address of a is %d\n", *ptr);
// // // // // // // // //     }
// // // // // // // // //     else
// // // // // // // // //     {
// // // // // // // // //         printf("The pointer is a null pointer and cannot be dereferance");
// // // // // // // // //     }

// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // Dangling Pointer

// // // // // // // // // #include <stdio.h>
// // // // // // // // // #include <stdlib.h>
// // // // // // // // // int* functionDangling()
// // // // // // // // // {
// // // // // // // // //     int a, b, sum;
// // // // // // // // //     a = 4;
// // // // // // // // //     b = 6;
// // // // // // // // //     sum = a + b;
// // // // // // // // //     return &sum;
// // // // // // // // // }
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     // case1: De allocation of a memory
// // // // // // // // //     int *ptr = (int *)malloc(7 * sizeof(int));
// // // // // // // // //     ptr[0] = 34;
// // // // // // // // //     ptr[1] = 333;
// // // // // // // // //     ptr[2] = 76;
// // // // // // // // //     ptr[3] = 9;
// // // // // // // // //     free(ptr); // ptr is now a dangling pointer

// // // // // // // // //     // case2: Function returning local variable address
// // // // // // // // //     int *dangPtr = functionDangling(); //dangPtr is now a dangling pointer

// // // // // // // // //     int *danglingPtr3;
// // // // // // // // //     //case3: Variable going out of scope
// // // // // // // // //     {
// // // // // // // // //         int a = 12;

// // // // // // // // //         danglingPtr3 = &a;
// // // // // // // // //     } // Here variable goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer

// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // #include AND #define

// // // // // // // // // #include <stdio.h>
// // // // // // // // // #include "Dpointer.c"
// // // // // // // // // #define PI 3.14
// // // // // // // // // #define CIRCLE(r) r*r
// // // // // // // // // int main()          //  O
// // // // // // // // // {
// // // // // // // // //     float var = PI;
// // // // // // // // //     int r =4;
// // // // // // // // //     int *ptr = functionDangling();
// // // // // // // // //     printf("This is PI %f\n", var);
// // // // // // // // //     printf("The area of this circle is %f\n", PI*CIRCLE(r));

// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // DIRECTIVES AND PREDEFINED MACROES
// // // // // // // // // #include <stdio.h>
// // // // // // // // // #include <stdlib.h>
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     printf("The date is %s\n", __DATE__);
// // // // // // // // //     printf("The time is %s\n", __TIME__);
// // // // // // // // //     printf("The line is %d\n", __LINE__);
// // // // // // // // //     printf("The ANSI is : %d\n", __STDC__);
// // // // // // // // //     printf("File name is : %s\n", __FILE__);
// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // WILD POINTER

// // // // // // // // // #include <stdio.h>
// // // // // // // // // #include <stdlib.h>
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     int a = 232;
// // // // // // // // //     int *ptr; //This is a wild pointer
// // // // // // // // //     // *ptr = 32; //This is not a good thing to do
// // // // // // // // //     ptr = &a; //ptr is no longer wild
// // // // // // // // //     printf("The value of a is %d\n", *ptr);
// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // #include <stdio.h>
// // // // // // // // int *functionDangling()
// // // // // // // // {
// // // // // // // //     int a, b, sum;
// // // // // // // //     a = 23;
// // // // // // // //     b = 34;
// // // // // // // //     sum = a + b;
// // // // // // // //     return &sum;
// // // // // // // // }
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     // Case1: De allocation of memory
// // // // // // // //     int *ptr = (int *)malloc(7 * sizeof(int));
// // // // // // // //     ptr[0] = 1;
// // // // // // // //     ptr[1] = 10;
// // // // // // // //     ptr[3] = 100;
// // // // // // // //     ptr[4] = 1000;
// // // // // // // //     free(ptr); //ptr is now a dangling pointer

// // // // // // // //     // Case2: Function returning local variable address
// // // // // // // //     int *dangPtr = functionDangling(); //functionDangling is now a Dangling pointer

// // // // // // // //     int *danglingptr3;
// // // // // // // //     //Case3: variable going out of scope
// // // // // // // //     {
// // // // // // // //         int a = 12;

// // // // // // // //         danglingptr3 = &a;
// // // // // // // //     }
// // // // // // // //     // Here variable goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // #include <stdio.h>
// // // // // // // int b = 34; // This is a global variable since it is declare inside main()
// // // // // // // int ret()
// // // // // // // {
// // // // // // //     return 43 *2;
// // // // // // // }
// // // // // // // int func1(int b1)
// // // // // // // {
// // // // // // //     static int myvar ;//=ret();
// // // // // // //     printf("The value of mvar is %d\n", myvar);
// // // // // // //     myvar++;
// // // // // // //     // printf("The value of b is %d\n", b);
// // // // // // //     // printf("The address of b inside func1 is %d\n", &b);
// // // // // // //     return b1 + myvar;
// // // // // // // }
// // // // // // // int main()
// // // // // // // {
// // // // // // //     int b = 344;
// // // // // // //     // printf("The address of b inside main is %d\n", &b);
// // // // // // //     int val = func1(b);
// // // // // // //     val = func1(b);
// // // // // // //     val = func1(b);
// // // // // // //     val = func1(b);

// // // // // // //     int *ptr = &val;
// // // // // // //     // printf("The value of func1 is %d\n", val);
// // // // // // //     return 0;
// // // // // // // }

// // // // // // #include <stdio.h>
// // // // // // int myfunc(int a, int b)
// // // // // // {
// // // // // //     // auto int sum;
// // // // // //     // sum = a + b;
// // // // // //     static int myvar;
// // // // // //     myvar ++;
// // // // // //     printf("The myvar is %d\n", myvar);

// // // // // //     return myvar;
// // // // // // }
// // // // // // int main()
// // // // // // {
// // // // // //     int myvar = myfunc(4, 5);
// // // // // //      myvar = myfunc(4, 5);
// // // // // //      myvar = myfunc(4, 5);
// // // // // //      myvar = myfunc(4, 5);
// // // // // //      myvar = myfunc(4, 5);
// // // // // //      myvar = myfunc(4, 5);
// // // // // //     // printf("The sum is %d\n", sum);
// // // // // //     return 0;
// // // // // // }

// // // // // // MEMORY LEAK KE CONDITION

// // // // // #include <stdio.h>
// // // // // #include <stdlib.h>
// // // // // int main()
// // // // // {
// // // // //     int i = 0, a;
// // // // //     int *i2;
// // // // //     while (i < 4333)
// // // // //     {
// // // // //         printf("Welcome to code with harry\n");
// // // // //         i2 = malloc(3423 * sizeof(int));
// // // // //         if (i % 100 == 0)
// // // // //         {
// // // // //             getchar();
// // // // //         }
// // // // //         i++;
// // // // //         // free(i2);// Whitout this we will encounter the situation of memory leak
// // // // //
// // // // //     return 0;
// // // // // }

// // // // // CALL BACK FUNCTION

// // // // #include <stdio.h>
// // // // #include <stdlib.h>
// // // // int sum(int a, int b)
// // // // {
// // // //     return a + b;
// // // // }

// // // // int greethelloAndExecute(int (*ptr)(int,int))
// // // // {
// // // //     printf("Hello user\n");
// // // //     printf("The sum of 3 and 7 are %d\n", ptr(3, 7));
// // // // }
// // // // int greetGmAndExecute(int (*ptr)(int,int))
// // // // {
// // // //     printf("Good morning user\n");
// // // //     printf("The sum of 5 and 5 are %d\n", ptr(5, 5));
// // // // }

// // // // int main()
// // // // {
// // // //     int (*ptr)(int, int);
// // // //     ptr = sum;
// // // //     greetGmAndExecute(ptr);
// // // //     return 0;
// // // // }

// // // //FUNCTION POINTER

// // // #include <stdio.h>
// // // #include <stdlib.h>
// // // int sum(int a, int b)
// // // {
// // //     return a + b;
// // // }
// // // void greet()
// // // {
// // //     printf("Hello world my user is good morning\n");
// // // }
// // // int main()
// // // {
// // //     // printf("The sum is %d\n", sum(4, 6)); //Testing the function
// // //     int (*ptr)(int,int);//Declaring a function pointer
// // //     ptr = &sum;//Creating a function pointer
// // //     int d = (*ptr)(4,16);//Dereferencing a fun. pointer
// // //     printf("The value of d is %d\n", d);

// // //     return 0;
// // // }

// // //FUNCTION REVISION
// // #include <stdio.h>
// // #include <stdlib.h>
// // int sum(int a, int b)
// // {
// //     return a + b;
// // }
// // int main()
// // {
// //     printf("The sum of 6 and 2 is %d\n", sum(6,2)); //Testing the function
// //     int (*ptr)(int, int); //declaring the function ptr
// //     ptr=&sum; //initialization the function pointer
// //     int d=(*ptr)(328,2); //dereferencing the function pointer
// //     printf("The value of d is %d\n", d);
// //     return 0;
// // }

// // COMMAND LINE ARGUMENT
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("The value of argc is %d\n", argc);
//     for (int i = 0; i < argc; i++)
//     {
//         printf("This argument at index number %d has a value of %s \n", i, argv[i]);
//     }

//     return 0;
// }

//FILE FUNCTION COMBINE

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

    // char str[5];
    // fgets(str, 10, ptr);
    // printf("The string I read was %s\n", str);

    ptr = fopen("myfile.txt", "w");

    fputc('k',ptr);
    fputs("hi raju", ptr);

    fclose(ptr);

    return 0;
}

// // // // // // // // // // // // // // // // // //file function revision

// // // // // // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // // // // // #include <stdlib.h>
// // // // // // // // // // // // // // // // // int main()
// // // // // // // // // // // // // // // // // {
// // // // // // // // // // // // // // // // //     FILE *ptr;
// // // // // // // // // // // // // // // // //     // ptr = fopen("myfile.txt", "r");
// // // // // // // // // // // // // // // // //     // char c = fgetc(ptr);
// // // // // // // // // // // // // // // // //     // printf("The char I read was %c\n", c);
// // // // // // // // // // // // // // // // //     // c = fgetc(ptr);
// // // // // // // // // // // // // // // // //     // printf("The char I read was %c\n", c);

// // // // // // // // // // // // // // // // //     // char str[5];
// // // // // // // // // // // // // // // // //     // fgets(str,7,ptr);
// // // // // // // // // // // // // // // // //     // printf("The string is %s\n", str);

// // // // // // // // // // // // // // // // //     ptr = fopen("myfile.txt", "r+");
// // // // // // // // // // // // // // // // //      fputc('q',ptr);
// // // // // // // // // // // // // // // // //      fputs("QUART final",ptr);

// // // // // // // // // // // // // // // // //      fclose(ptr);
// // // // // // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // // // // }

// // // // // // // // // // // // // // // // //DERIVATIVES AND PREDEFINED MACROES

// // // // // // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // // // // // #include <stdlib.h>
// // // // // // // // // // // // // // // // // int main()
// // // // // // // // // // // // // // // // // {
// // // // // // // // // // // // // // // // //     printf("The date is %s\n", __DATE__);
// // // // // // // // // // // // // // // // //     printf("The time is %s\n", __TIME__);
// // // // // // // // // // // // // // // // //     printf("The ANSI is : %d\n", __STDC__);
// // // // // // // // // // // // // // // // //     printf("File name is : %s\n", __FILE__);
// // // // // // // // // // // // // // // // //     printf("The line is %d\n", __LINE__);
// // // // // // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // // // // }

// // // // // // // // // // // // // // // // // DEFINE AND INCLUDE PREPROCESSOR

// // // // // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // // // // #include <Dpointer.c>
// // // // // // // // // // // // // // // // #define PI 3.14
// // // // // // // // // // // // // // // // int main()
// // // // // // // // // // // // // // // // {
// // // // // // // // // // // // // // // //     float var = PI;
// // // // // // // // // // // // // // // //     int *ptr = functionDangling();
// // // // // // // // // // // // // // // //     printf("The value of PI is %f\n", var);

// // // // // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // // // }

// // // // // // // // // // // // // // // LOOPS :-
// // // // // // // // // // // // // // // For loop
// // // // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // // // #include <stdlib.h>
// // // // // // // // // // // // // // // int main()
// // // // // // // // // // // // // // // {
// // // // // // // // // // // // // // //     printf("Hello world\n");
// // // // // // // // // // // // // // //     for (int i = 0, j = 0; i < 5; i++)
// // // // // // // // // // // // // // //     {
// // // // // // // // // // // // // // //         printf("%d %d\n", i);
// // // // // // // // // // // // // // //     }

// // // // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // // }

// // // // // // // // // // // // // // // While loop
// // // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // // #include <stdlib.h>
// // // // // // // // // // // // // // int main()
// // // // // // // // // // // // // // {
// // // // // // // // // // // // // //     int i = 0;
// // // // // // // // // // // // // //     while (i < 25)
// // // // // // // // // // // // // //     {
// // // // // // // // // // // // // //         printf("%d\n", i);
// // // // // // // // // // // // // //         i = i + 1;
// // // // // // // // // // // // // //     }
// // // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // }

// // // // // // // // // // // // // // Do While loop

// // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // #include <stdlib.h>
// // // // // // // // // // // // // int main()
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     int num, index = 0;
// // // // // // // // // // // // //     printf("Enter a number\n");
// // // // // // // // // // // // //     scanf("%d", &num);

// // // // // // // // // // // // //     do
// // // // // // // // // // // // //     {
// // // // // // // // // // // // //         printf("%d\n", index+1);
// // // // // // // // // // // // //         index = index + 1;
// // // // // // // // // // // // //     } while (index < num);

// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }

// // // // // // // // // // // // // array

// // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // #include <stdlib.h>
// // // // // // // // // // // // // int main()
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     int marks[4] = {23,4,22,44};

// // // // // // // // // // // // //     for (int i = 0; i < 4; i++)
// // // // // // // // // // // // //     {
// // // // // // // // // // // // //         printf("")
// // // // // // // // // // // // //     }

// // // // // // // // // // // // //     // marks[0] = 55;
// // // // // // // // // // // // //     // printf("Marks of student 1 is %d\n", marks[0]);
// // // // // // // // // // // // //     // marks[1] = 83;
// // // // // // // // // // // // //     // marks[2] = 74;
// // // // // // // // // // // // //     // marks[3] = 35;
// // // // // // // // // // // // //     // marks[4] = 75;
// // // // // // // // // // // // //     // marks[0] = 535;

// // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // }

// // // // // // // // // // // // // array

// // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // #include <stdlib.h>
// // // // // // // // // // // // int main()
// // // // // // // // // // // // {
// // // // // // // // // // // //     //int marks [4];
// // // // // // // // // // // //     int marks[2][4] = {{10, 3, 20, 40},
// // // // // // // // // // // //                        {11, 22, 44, 33}};

// // // // // // // // // // // //     // for (int i = 0; i < 4; i++)
// // // // // // // // // // // //     // {
// // // // // // // // // // // //     //     printf("Enter the value of %d element of the array\n", i);
// // // // // // // // // // // //     //     scanf("%d", &marks[i]);
// // // // // // // // // // // //     // }

// // // // // // // // // // // //     for (int i = 0; i < 2; i++)
// // // // // // // // // // // //     {
// // // // // // // // // // // //         for (int j = 0; j < 4; j++)
// // // // // // // // // // // //         {
// // // // // // // // // // // //             printf("The value of %d,%d element of the array is %d\n", i, j, marks[i][j]);
// // // // // // // // // // // //             // printf("%d ", marks[i][j]);
// // // // // // // // // // // //         }
// // // // // // // // // // // //         printf("\n");
// // // // // // // // // // // //     }

// // // // // // // // // // // // //     // marks[0] = 55;
// // // // // // // // // // // // //     // printf("Marks of student 1 is %d\n", marks[0]);
// // // // // // // // // // // // //     // marks[1] = 83;
// // // // // // // // // // // // //     // marks[2] = 74;
// // // // // // // // // // // // //     // marks[3] = 35;
// // // // // // // // // // // // //     // marks[4] = 75;
// // // // // // // // // // // // //     // marks[0] = 535;

// // // // // // // // // // // //     return 0;
// // // // // // // // // // // // }

// // // // // // // // // // // //Pointers

// // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // #include <stdlib.h>
// // // // // // // // // // // int main()
// // // // // // // // // // // {
// // // // // // // // // // //     printf("Lets learn about pointers\n");
// // // // // // // // // // //     int a = 76;
// // // // // // // // // // //     int * ptr = &a;
// // // // // // // // // // //     int * ptr2 = NULL ;
// // // // // // // // // // //     printf("The value of  a is %d\n", a);
// // // // // // // // // // //     printf("The value of a is %d\n", *ptr);
// // // // // // // // // // //     printf("The address of  a is %d\n", ptr);
// // // // // // // // // // //     printf("The address of some garbage value %d\n", *ptr2);
// // // // // // // // // // //     printf("The address of  a is %d\n", &ptr);

// // // // // // // // // // //     return 0;
// // // // // // // // // // // }

// // // // // // // // // // // Array and Pointer in Arithmatic

// // // // // // // // // // #include <stdio.h>
// // // // // // // // // // #include <stdlib.h>
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     // char a = 'k';
// // // // // // // // // //     // char* ptr = &a;
// // // // // // // // // //     // printf("%d\n", ptr-2);
// // // // // // // // // //     // ptr++;
// // // // // // // // // //     // // ptr--;
// // // // // // // // // //     // printf("%d\n", ptr);
// // // // // // // // // //     // printf("%d\n", ptr+6);

// // // // // // // // // //     int arr[] = {1,2,3,4,5,6,67};
// // // // // // // // // //     printf("Value at position 3 of the array is %d\n", arr[0]);
// // // // // // // // // //     printf("The address of 1st element of the array is %d\n", &arr[0]);
// // // // // // // // // //     printf("The address of 1st element of the array is %d\n", arr);
// // // // // // // // // //     printf("The address of 2nd element of the array is %d\n", &arr[1]);
// // // // // // // // // //     printf("The address of 2nd element of the array is %d\n", arr+1);
// // // // // // // // // // *(
// // // // // // // // // //     // printf("Value at position 3 of the array is %d\n", *(arr[0]));
// // // // // // // // // //     printf("The address of 1st element of the array is %d\n", *(&arr[0]));
// // // // // // // // // //     printf("The address of 1st element of the array is %d\n", *(arr));
// // // // // // // // // //     printf("The address of 2nd element of the array is %d\n", *(&arr[1]));
// // // // // // // // // //     printf("The address of 2nd element of the array is %d\n", *(arr+1));

// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // //Array and Pointer in Arithmatic

// // // // // // // // // #include <stdio.h>
// // // // // // // // // #include <stdlib.h>
// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     // char a = '3';
// // // // // // // // //     // char* ptr = &a;
// // // // // // // // //     // printf("%d\n", ptr);
// // // // // // // // //     // ptr++;
// // // // // // // // //     // printf("%d\n", ptr);
// // // // // // // // //     // printf("%d\n", ptr + 2);
// // // // // // // // //     // printf("%d\n", ptr - 2);

// // // // // // // // //     int arr[] = {1, 2, 3, 4, 5, 6, 67};
// // // // // // // // //     printf("The value at position 6 of the array is %d\n", arr[6]);
// // // // // // // // //     printf("The address of first element of the array is %d\n", &arr[0]);
// // // // // // // // //     printf("The address of first element of the array is %d\n", arr);
// // // // // // // // //     printf("The address of first element of the array is %d\n", &arr[1]);
// // // // // // // // //     printf("The address of first element of the array is %d\n", arr + 1);

// // // // // // // // //     // printf("The value at position 6 of the array is %d\n", arr[6]);
// // // // // // // // //     printf("The address of first element of the array is %d\n", *(&arr[0]));
// // // // // // // // //     printf("The address of first element of the array is %d\n", *(arr));
// // // // // // // // //     printf("The address of first element of the array is %d\n", arr[0]);
// // // // // // // // //     printf("The address of first element of the array is %d\n", arr[1]);
// // // // // // // // //     printf("The address of first element of the array is %d\n", *(&arr[1]));
// // // // // // // // //     printf("The address of first element of the array is %d\n", *(arr + 1));
// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // For loop

// // // // // // // // #include <stdio.h>
// // // // // // // // #include <stdlib.h>
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     int num;
// // // // // // // //     // for (int i = 1,j = 1; j< 20,i < 11; i++)
// // // // // // // //     // {
// // // // // // // //     //     printf("%d %d\n", i, j);
// // // // // // // //     //     j++;
// // // // // // // //     // }

// // // // // // // //     // do
// // // // // // // //     // {
// // // // // // // //     //     int num = 0, index;
// // // // // // // //     //     printf("The num is %d\n", num);
// // // // // // // //     //     num++;
// // // // // // // //     // } while (index < num);

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // Passing arrays to function

// // // // // // // #include <stdio.h>
// // // // // // // int func1(int array[])
// // // // // // // {
// // // // // // //     for (int i = 0; i < 4; i++)
// // // // // // //     {
// // // // // // //         printf("The value at index no. %d is %d \n", i, array[i]);
// // // // // // //     }
// // // // // // //     array[0] = 42;

// // // // // // //     return 0;
// // // // // // // }

// // // // // // // void func2(int* ptr)
// // // // // // // {
// // // // // // //     for (int i = 0; i < 4; i++)
// // // // // // //     {
// // // // // // //         printf("The value at %d is %d\n", i, ptr[i]);
// // // // // // //     }
// // // // // // //     ptr[2] = 80;

// // // // // // // }

// // // // // // // void func3(int arr[2][2])
// // // // // // // {
// // // // // // //     for (int i = 0; i < 2; i++)
// // // // // // //     {
// // // // // // //         for (int j = 0; j < 2; j++)
// // // // // // //         {
// // // // // // //             printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
// // // // // // //         }

// // // // // // //     }

// // // // // // // }
// // // // // // // int main()
// // // // // // // {
// // // // // // //     // int arr[] = {23, 44, 4, 3};
// // // // // // //     // printf("The value of index 0 is %d\n", arr[0]);
// // // // // // //     // func1(arr);
// // // // // // //     // printf("The value of index 0 is %d\n", arr[0]);
// // // // // // //     // func2(arr);
// // // // // // //     // func2(arr);
// // // // // // //     int arr[2][2] = {{23, 44},
// // // // // // //                      {4, 3}};

// // // // // // //     func3(arr);
// // // // // // //     return 0;
// // // // // // // }

// // // // // // // #include <stdio.h>
// // // // // // // #include <stdlib.h>
// // // // // // // int main()
// // // // // // // {
// // // // // // //     int num,index = 0;
// // // // // // //     printf("Enter the number\n");
// // // // // // //     scanf("%d", &num);

// // // // // // //     do
// // // // // // //     {
// // // // // // //         printf("%d\n", index);
// // // // // // //         index = index + 1;
// // // // // // //     } while (index<num);

// // // // // // //     return 0;
// // // // // // // }

// // // // // // // #include <stdio.h>
// // // // // // // #include <stdlib.h>
// // // // // // // int main()
// // // // // // // {
// // // // // // //     int i=0 ;
// // // // // // //     while (i<31)
// // // // // // //     {
// // // // // // //         printf("%d\n", i);
// // // // // // //         i++;
// // // // // // //     }

// // // // // // //     return 0;
// // // // // // // }

// // // // // // // // OPERATORS

// // // // // // // #include <stdio.h>
// // // // // // // #include <stdlib.h>
// // // // // // // int main()
// // // // // // // {
// // // // // // //     auto int a;
// // // // // // //     a = 34;
// // // // // // //     float b = 3.2;

// // // // // // //     printf("a + b = %f\n", a + b);
// // // // // // //     printf("a - b = %f\n", a - b);
// // // // // // //     printf("a * b = %f\n", a * b);
// // // // // // //     printf("a / b = %f\n", a / b);

// // // // // // //     return 0;
// // // // // // // }

// // // // // // //FORMAT SPECIFIER, CONSTANT AND ESCAPE SEQUENCE

// // // // // // #include <stdio.h>
// // // // // // #define PI 3.14
// // // // // // int main()
// // // // // // {
// // // // // //     int a = 34;
// // // // // //     // float b = 2.2;
// // // // // //     const float b = 2.2;
// // // // // //     printf("The PI is %.2f\n", PI);
// // // // // //     printf("The b is %.2f\n", b);
// // // // // //     // printf("The value of a is %d and the value of b is %f\n",a, b );
// // // // // //     // printf(" this\' is \"a \a comment %.1f hi\n", b );

// // // // // //     return 0;
// // // // // // }

// // // // // // TYPECASTING

// // // // // #include <stdio.h>
// // // // // #include <stdlib.h>
// // // // // int main()
// // // // // {
// // // // //     int a = 34;
// // // // //     float b = 55/5;
// // // // //     printf("the value of b is %f\n", b);
// // // // //     return 0;
// // // // // }

// // // // // STATEMENTS

// // // // #include <stdio.h>
// // // // #include <stdlib.h>
// // // // int main()
// // // // {
// // // //     int age, marks;
// // // //     printf("Enter your age\n");
// // // //     scanf("%d", &age);

// // // //     printf("Enter your marks\n");
// // // //     scanf("%d", &marks);

// // // //     switch (age)
// // // //     {
// // // //     case 3:
// // // //         printf("Your age is 3\n");
// // // //         switch (marks)
// // // //         {
// // // //         case 45:
// // // //             printf("Your marks are 45\n");
// // // //             break;

// // // //         default:
// // // //             printf("Your marks are not 45\n");
// // // //             break;
// // // //         }
// // // //         break;
// // // //     case 13:
// // // //         printf("Your age is 13\n");
// // // //         break;
// // // //     case 23:
// // // //         printf("Your age is 23\n");
// // // //         break;

// // // //     default:
// // // //         printf("age is not 3, 13 or 23\n");
// // // //         break;
// // // //     }

// // // //     return 0;
// // // // }

// // // // Recursion

// // // #include <stdio.h>
// // // #include <stdlib.h>

// // // int factorial(int number)
// // // {
// // //     if (number == 1 || number == 0)
// // //     {
// // //         return 1;
// // //     }
// // //     else
// // //     {
// // //         return (number * factorial(number - 1));
// // //     }
// // // }

// // // int main()
// // // {
// // //     int num;
// // //     printf("Enter the number you want the factorial of \n");
// // //     scanf("%d", &num);

// // //     printf("The factorial of %d is %d\n",num, factorial(num));
// // //     return 0;
// // // }

// // /// functions

// // #include <stdio.h>
// // #include <stdlib.h>
// // int sum(int a, int b);
// // void printstar(int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         printf("The star of %d is %c\n", i, '*');
// //     }
// // }
// // int takenumber()
// // {
// //     int i;
// //     printf("Enter the number\n");
// //     scanf("%d", &i);
// //     return i;
// // }

// // int main()
// // {
// //     int a, b, c;
// //     a = 34;
// //     b = 6;
// //     // c = sum(a,b);
// //     // printstar(7);
// //     c = takenumber();
// //     // printf("The value of c is %d\n", c);
// //     printf("The number enteredd is %d\n", c);
// //     return 0;
// // }
// // int sum(int a, int b)
// // {
// //     return a + b;
// // }

// // BREAK AND CONTINUE STATEMENT
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i, age;
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\nEnter your age\n", i);
//         scanf("%d", &age);
//         //     if(age>10)
//         // {
//         //     break;
//         // }
//         if (age > 10)
//         {
//             continue;
//         }
//         printf("hi my name continue\n");
//         printf("hi my name continue\n");
//         printf("hi my name continue\n");
//         printf("hi my name continue\n");
//     }

//     return 0;
// }

//string1

// #include <stdio.h>
// void printstar(char str[])
// int main()
// {
//     char str[]={'h','a','r','r','y','\0'};
//     char str[63] = "harry";
    
//     return 0;
// }
