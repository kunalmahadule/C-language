#include <stdio.h>

int main()
{
   printf("Hello World\n");
   int i,k;

   for (int i = 0,k =0;i < 20,k < 10; i++)
   {
       printf("%d\n", i,k);
       k = k+1;
   }
   
    int i = 0;
    while (i<80)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    
    
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index);
        index = index + 1;
    } while (index < num);

    return 0;
}
