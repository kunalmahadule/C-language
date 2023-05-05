//  from: WS CUBE TECH
#include <stdio.h>
#include <stdlib.h>
enum week
{
    Monday,
    Tuesday,
    Wednesday = 76,
    Thurasday,
    Friday = 5,
    Satuarday,
    Sunday
};
int main()
{
    enum week day;
    day = Thurasday;
    printf("%d\n", day);

    return 0;
}