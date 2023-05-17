#include <stdio.h>
/*
REAL FILE
1) isme hamne dekha function kaise value return karte hai
2) local variable(actual parameter) kaise copy ho jata hai formal parameter mai
3) global variable
4) local or global me se prefrence kon lenga [local lenga]
5) global variable prefrence kaise lenga
6) static variable kaise 0 se initilize ho jata hai,function se value nahi leta return me
7) point2 : is e.g me func1 me b jo gaya hai us b ka address main me alag or func1 me alag hai ye bhi hamne dekha
8) 
*/
int b = 22; // This is a global variable since it is a declare outside main()
int rat()
{
    return 7;
}
int func1(int b1)
{
    static int val = 0; //=rat();//function se value return mai nahi leta hai 
    printf("The value of val is %d\n", val);
    val++;
    // printf("The address of b inside func1 is %d\n", &b);
    // printf("The value of b is %d\n", b);
    return b1 + 3;
}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b);

    int myvar = func1(b);
    myvar = func1(b);
    myvar = func1(b);
    myvar = func1(b);
    myvar = func1(b);
    myvar = func1(b);

    int *ptr = &myvar;
    // printf("The value of myvar is %d\n", *ptr);
    return 0;
}
// more example made by rough file
// #include <stdio.h>
// int b = 34; // This is a global variable since it is declare inside main()
// int ret()
// {
//     return 43 *2;
// }
// int func1(int b1)
// {
//     static int myvar ;//=ret();
//     printf("The value of mvar is %d\n", myvar);
//     myvar++;
//     // printf("The value of b is %d\n", b);
//     // printf("The address of b inside func1 is %d\n", &b);
//     return b1 + myvar;
// }
// int main()
// {
//     int b = 344;
//     // printf("The address of b inside main is %d\n", &b);
//     int val = func1(b);
//     val = func1(b);
//     val = func1(b);
//     val = func1(b);


//     int *ptr = &val;
//     // printf("The value of func1 is %d\n", val);
//     return 0;
// }
