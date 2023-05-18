// STRUCTURE ME HUM DIFFERENT DIFFERENT DATATYPE KE MEMBERS KO EK SAATH ME JOD KE STORE KAR SAKTE HAI JAISE KE INT,CHAR,FLOAT ETC.
#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}harry, ravi, aman;
// struct Student harry, ravi, aman;
void print()
{
    printf("Harry name is %s and aman name is %s\n", harry.name, aman.name);
}
int main()
{

    harry.id = 1;
    ravi.id = 2;
    aman.id = 3;
    harry.marks = 443;
    ravi.marks = 23;
    aman.marks = 512;
    harry.fav_char = 'k';
    ravi.fav_char = 'e';
    aman.fav_char = 'f';
    strcpy(harry.name, "Harry Potter student of the year");
    // strcpy(harry.name, "Harry Potter student of the year");

    strcpy(aman.name, "aman Kumar");
    // printf("Harry got %d marks \n", harry.marks);
    // printf("Harry`s name is: %s \n", harry.name);
    // printf("aman got %d marks \n", aman.marks);
    // printf("aman name is: %s \n", aman.name);
    print();
    return 0;
}
