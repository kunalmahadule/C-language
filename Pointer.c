// REAL FILE
// Pointer ek aisa variable hai jo kisi dusre variable ka address store kar sakta hai [*] laga ke hum value ko print kar sakte hai OR '&'.'kuch nahi' laga ke hum address print kar sakta hai

#include <stdio.h>

int main()
{
    // printf("Lets learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2= NULL;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("The address of some garbage is %p\n", ptr2);//Ye line ko dereferance karange to iske neeche vale print statement print nahi honge (ptr2 ke jagha *ptr2 likhange to)
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);

    return 0;
}
