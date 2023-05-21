// UNION YE SAMAN HAI STRUCTURE KE UNION KAM BYTES ME VALUES KO STORE KARTA HAI PER HUM EK TIME PE EK HE VALUE KO ACCESS KAR SAKTE HAI. UNION SABSE JAYDA BYTE VALE DATATYPE KO STORE KARTA HAI. BAAD ME VO KAM BYTES VALE DATA TYPES KO ACCESS KAR SAKE.
#include <stdio.h>
#include <string.h>
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[23];
};
int main()
{

    union Student s1;
    s1.fav_char = 'p';
    s1.id = 4;
    s1.marks = 65;
    strcpy(s1.name, "BALRAM");

    printf("The id is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The fav_char is %c\n", s1.fav_char);
    printf("The name is %s\n", s1.name);
    return 0;
}
