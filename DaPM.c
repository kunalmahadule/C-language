// DIRECTIVES AND PREDEFINED MACROES
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("The date is %s\n", __DATE__);
    printf("The time is %s\n", __TIME__);
    printf("The ANSI is : %d\n", __STDC__);
    printf("File name is : %s\n", __FILE__);
    printf("The line is %d\n", __LINE__);
    return 0;
}