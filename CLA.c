#include <stdio.h>
// argc matlab argument ko count karna (hamne kuch argument nahi diya hai to argc ke value 1 honge)
//argv matlab argument me kya value hai [compile karne ke bad jo kuch likhte hai vo sab command line argument hai e.g .\CLA.exe harry is(isme argc =2)(argv=index 0 pe path ka nam index 1 pe harry index 2 pe is)]
//argv ye string hai argc int hai
int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s \n", i, argv[i]);
    }
    
    return 0;
}
/*
gcc file name
 compile karne ke liye :.\CLA.exe harry is
*/