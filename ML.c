/*
// compile karne ke liye gcc .\ML.c enter 
// uske baad .\a.exe
// task manager open karke vaha pe a(32bit) ke file dekhna prog. ko enter mar mar ke cheak karna to uski space increase hoti chali jayegee free nahi kiya hai to
// free kiya hai to size increase nahi honga 
// file manager se bhi input de ke hum output le sakte hai

                    This situation is memory block 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i = 0;
    int *i2;
    while (i < 10000)
    {
        // printf("hello world\n");
        printf("Welcome to code with harry");
        i2 = malloc(3000 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();//ek character le lo matlab getchar
        }
        i++;
        free(i2); //Without this we will encounter a situation of memory leak
    }

    return 0;
}

