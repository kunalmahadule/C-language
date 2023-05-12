#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Quiz for HARRY
    int science;
    int maths;
    
    printf("Enter your science marks\n");
    scanf("%d", &science);

    printf("Enter your maths marks\n");
    scanf("%d", &maths);

    if (science, maths>=50)
    {
        printf("You can pass for both exam science and maths\n");
    }
   else if (science, maths>=50)
   {
     printf("You are between 50 to 100 you win school bag\n");
   }
   
   else if (science>=50)
   {
       printf("You are score 50 for science exam you win pen\n");
   }
   else if (maths>=50)
   {
       printf("You are score 50 for maths exam you win pen\n");
   }
   else
    {
        printf("You are fail\n");
    }

    return 0;
}
