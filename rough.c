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

// //Normal loops and Infinity loops
// // 1.while
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     //     while (1)
//     //     {
//     //         printf("Hello world");
//     //     }

//     // int i = 0;
//     // while (i < 10)
//     // {
//     //     printf("%d\n", i);
//     //     i = i + 1;
//     // }

//     // do
//     // {
//     //     printf("WsCubeTech");
//     // } while (1);

//     int num, index = 0;
//     printf("Enter the num\n");
//     scanf("%d", &num);

//     do
//     {
//         printf("%d\n", index);
//         index = index + 1;
//     } while (index < num);

//     // int str[10] = {11,22,33,44,55,66,77,88,99,100};

//     // for (int i = 0; i < 10; i++)
//     // {
//     //     printf("The value of %d element of the array is %d\n", i, str[i]);
//     // }
//     //    printf("helloo \t\t\t\t kunal\\n");

//     // for (;;)
//     // {
//     //    printf("helloo kunal");
//     // }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// enum week
// {
//     Monday,
//     Tuesday,
//     Wednesday = 76,
//     Thurasday,
//     Friday = 5,
//     Satuarday,
//     Sunday
// };
// int main()
// {
//     enum week day;
//     day = Thurasday;
//     printf("%d\n", day);

//     return 0;
// }

//  // demo
// #include <stdio.h>
// #include <stdlib.h>
// void kunal()
// {
//     printf("HI KUNAL MAHADULE");
// }
// int main()
// {
//     kunal();
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 88};

//     // Value at position no.0 is
//     printf("The value at position 0 is %d\n", *arr);
//     printf("The value at position 0 is %d\n", arr[0]);
//     printf("The address at position 0 is %d\n", &arr);
//     printf("The address at position 0 is %d\n", arr + 0);
//     printf("The address at position 0 is %d\n", &arr[0]);

//     // Value at position no.1 is
//     printf("======================================\n");

//     printf("The value at position 0 is %d\n", *arr + 1);
//     printf("The value at position 0 is %d\n", arr[1]);
//     printf("The address at position 0 is %d\n", &arr + 1);
//     printf("The address at position 0 is %d\n", arr + 1);
//     printf("The address at position 0 is %d\n", &arr[1]);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int arr[5];

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the value of %d element of the array is\n", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value of %d element is %d\n", i, arr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a =34;
//     int arr[2][3][3]; //= {{1, 2, 3},
//                       //{6, 5, 4}};
//     int *ptr = &a;
//     printf("The address of a is %d\n", ptr);

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 3; k++)
//             {
//                 printf("Enter the value of position %d, %d, %d element of the array is: ", i, j, k);
//                 scanf("%d", &arr[i][j][k]);
//             }
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 3; k++)
//             {
//                 printf("The value of position %d, %d, %d element of the array is %d\n", i, j, k, arr[i][j][k]);
//             }
//         }
//     }
//     return 0;
// }

//Format specifier escape sequences and macroes
// #include <stdio.h>
// #define PI 3.14
// int main()
// {
// //     int a = 6;
// //     float b = 40.2;
// //     printf("The value of a and b is %d, %-0.2f\n", a, b);
// //     printf("The PI is %f", PI);

//     long long int c = 12;
//     printf("The c is %%d %d\n", c);
//     return 0;
// }

//Passing array to the function

// #include <stdio.h>
// #include <stdlib.h>
// int func1(int array[2])
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The value of %d element of the array is %d\n", i, array[i]);
//     }
//     array[0] = 34; //This is reflected in main()

//     return 0;
// }
// void func2(int *ptr)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The value of %d element of the array is %d\n", i, ptr[i]);
//     }
//     *(ptr + 3) = 10;
// }
// int kunal(int arr[2][2])
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("The value of %d,%d element of the array is %d\n", i,j, arr[i][j]);
//         }

//     }
// }
// int main()
// {
//     int arr[] = {11,22,33,44};
//     // int arr[2][2] = {{65, 54},
//     //                  {13, 96}};
//     printf("Hello World %d\n",__LINE__);
//     printf("The value of 2 element is %d,%d\n", arr[2],__LINE__);
//     func1(arr[2]);
//     printf("The value of 2 element is %d,%d\n", arr[2],__LINE__);
//     // func2(arr);
//     // func2(arr);

//     // kunal(arr);
//     return 0;
// }

// #include <stdio.h>
// int swap(int *a, int *b)
// {
//     *(a = a + 3);
//     *(b = b - 2);

//     return 0;
// }
// int main()
// {
//     int a = 4;
//     int b = 3;
//     printf("The value of a and b is %d, %d\n", a, b);
//     swap(&a, &b);
//     printf("The value of a and b after swaping is %d, %d\n", a, b);

//     return 0;
// }

// #include <stdio.h>
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;

// }
// int main()
// {
//     int a = 34, b = 74;
//     printf("The value of a is %d\n", a);
//     printf("The value of b is %d\n", b);
//     swap(&a,&b);
//     printf("The value of a is %d\n", a);
//     printf("The value of b is %d\n", b);
//     return 0;

// }

//FUNCTIONS and it`s type

//Functions and its types
/*
2.argument hai with return value no         (done)
3.argument no   with return value hai       (done)


1.argument hai with return value hai        
4.argument  no  with return value no        
*/

// #include <stdio.h>
// #include <stdlib.h>
// int sum(int x, int y);
// void g(void)
// {
//     printf("Hello World\n");
// }
// int main()
// {
//     int a = 12;
//     int b = 22;
//     printf("The value of a is %d and b is %d\n", a, b);
//     int c = sum(a, b);
//     printf("The value of c is %d\n", c);

//     g();
//     return 0;
// }

// int sum(int x, int y)
// {
//     int sum = x + y;
//     return sum;
// }

