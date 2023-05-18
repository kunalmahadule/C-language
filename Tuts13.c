# include <stdio.h>
int main()
{
    //Harry video 13
    //do while loop
     //harry ke video 12 me information hai loops ke theory video
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index+1);
        index = index + 1;
    } while (index < num);

    return 0;
}
