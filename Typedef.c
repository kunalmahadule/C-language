/*SYNTEX :-
 typedef <Previous name>_<alias name>
 TYPEDEF KA MATLAB EK NAM KO REPLCE KAR DENA DUSRE NAM ME JAISE KE INT KO CONVERT KAR DO INTEGER ME, UNSIGNED LONG KO CONVERT KAR DO UL ME ETC. 
STRUCTURE KA THODA SYNTEX DIFFERENT HAI. ok
*/
#include <stdio.h>
#include <string.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[23];
} std;

int main()
{
    // typedef int* intpointer ;
    // int *a, b;
    // int c = 22;
    // a = &c;
    // b = c;
    // printf("The a is %d\n", a);
    // printf("The b is %d\n", b);


    std s1, s2;
    s1.id = 33;
    s2.id = 75;
    s1.marks = 45;
    s1.fav_char = 'Q';
    strcpy(s1.name, "PANTHER");
    printf("The s1`s id is %d\n", s1.id);
    printf("The s2`s id is %d\n", s2.id);

    // typedef unsigned long ul;
    // typedef int integer;
    // ul u1, u2, u3;
    // integer a = 23;
    // printf("The value of a is %d",a);
    return 0;
}