#include <stdio.h>
int main(int argc, char const *argv[])

  { int science;
    int maths;

    printf("Enter your science marks\n");
    scanf("%d", &science);

    printf("Enter your maths marks\n");
    scanf("%d", &maths);
    if (science, maths >= 50)
    {
        printf("You are pass both exam maths and science\n");
    }
   else if (science, maths>=50)
   {
       printf("You are gifted 45 rs gift\n");
   }
   else if (maths>=50)
   {
       printf("You are gifted 15 rs gift\n");
   }
    else if (science>=50)
   {
       printf("You are gifted 15 rs gift\n");
   }
   else
    {
        printf("You are fail\n");
    }

    return 0;
}
