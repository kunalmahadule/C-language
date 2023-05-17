// #include <stdio.h>
// // // #include "Temp.c"
// // // int a ;
// // void func1()
// // {
// //     static int harry = 10;
// //     harry ++;
// //     // return harry;
// //     // int a;
// //     // printf("The value of a is %d\n", a);
// // }
// // int main()
// // {
// //     int harry ;
// //     // int *ptr = &harry;
// //     // printf("%d" ,harry);
// //     func1(harry);
// //     func1(harry);

// //     // printf("The value of harry is %p\n", harry);
// //     // printf("The address of pointer is %p\n", ptr);
// //     // printf("The address of harry is %p\n", &ptr);
// //     // printf("The address of pointer is %p\n", &harry);
// //     // printf("The value of harry is %p\n", *ptr);
// //     // printf("The a is %d\n", a);
// //     return 0;
// // }
// // // declaration - tell the compiler variable is present (No space reversed)
// // // defination - declaration + (space reverse)

#include <stdio.h>
// #include "Temp.c"
/*
1)AUTOMATIC VARIABLE :int sum ko hamne auto lagaya to ye valid hai [A.V auto storage class davara define hote hai](as a local variable)
2)EXTERNAL VARIABLE (as a global variable) :G.V bolte hai kyoke iski external variable class davara define kiya jata hai
3)EXTERN KEYWORD :function ke ander G.V ko use karna hai L.V ke rehete to hum function ke ander extern ka use karenge
4)STATIC KEYWORD :S.V ko static storage class dawara define kiya jayega . Agar aap static me value store karna chahate hai to variable ke aage static laga de 
5)REGISTAR VARIABLE :E.V ko registar storage class dawara define kiya jayega . Agar aap registar me value store karna chahate hai to variable ke aage registar laga do. registar var. hamko CPU registar ke ander value store karne me help karti hai
6)               $#@!"BEST OF LUCK"$#@!
*/
//int sum;// This is a global variable
int myfunc(int a, int b)
{
    // auto int sum;
    // extern int sum;
    static int myVar;
    myVar++;
    printf("The myVar is %d\n", myVar);

    // sum = a + b;
    return myVar;
}
// int sum = 98;
int main()
{
    register int myVar = myfunc(3, 4);
    myVar = myfunc(3, 4);
    myVar = myfunc(3, 4);
    myVar = myfunc(3, 4);
    // printf("The myVar is %d\n", myVar);
    return 0;
}
