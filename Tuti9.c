# include <stdio.h>
# define PI 3.14
int main(int argc, char const *argv[])
{
    /* video 9
    this is a multi line comment
    constant,format specifier & escape sequences


    this is ignore by a compiler
    */
    int a = 43;
    const float b = 6.7;
    //b=8.2;// cannot do this science b is a constant
    //printf("Hello World\n");
    //printf("The value of a is %d and the value of b is %f\n", a, b);
   // printf("%7.3f this", b);
   printf(" new line\n tab charactor \t\t %7.3f", PI);

    return 0;
}
// format specifier constant and escape sequences