#include <stdio.h>
/*

n=3
You manage a travel agency and you want your n drivers to input their following details 
1. Name
2. Driving licence no.
3. Route
4. Kms
Your program should be able to take n as input (or you can take n=3 for simplicity) and your drivers will start inputting their details one by one .

Your program should print details of the drivers in a beautiful fashion.
User structures

*/
struct Driver
{
    char name[34];
    char dlno[45];
    char route[47];
    int kms;
};

int main()
{
    struct Driver d1, d2, d3;

    printf("Enter the details of the Driver No 1\n");
    printf("Enter the name of first Driver\n");
    scanf("%s", &d1.name);

    printf("Enter the dlno. of first Driver\n");
    scanf("%s", &d1.dlno);

    printf("Enter the route of first Driver\n");
    scanf("%s", &d1.route);

    printf("Enter the kms of first Driver\n");
    scanf("%d", &d1.kms);

   
   
    printf("Enter the details of the Driver No 2\n");
    printf("Enter the name of second Driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno. of second Driver\n");
    scanf("%s", &d2.dlno);

    printf("Enter the route of second Driver\n");
    scanf("%s", &d2.route);

    printf("Enter the kms of second Driver\n");
    scanf("%d", &d2.kms);

   
   
    printf("Enter the details of the Driver No 3\n");
    printf("Enter the name of third Driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno. of third Driver\n");
    scanf("%s", &d2.dlno);

    printf("Enter the route of third Driver\n");
    scanf("%s", &d2.route);

    printf("Enter the kms of third Driver\n");
    scanf("%d", &d2.kms);

    printf("*******Printing Information of these drivers:*******\n");
    printf("For Driver No 1:\n Name is %s\n", d1.name);
    printf("DL number is %s\n", d1.dlno);
    printf("Route is %s\n", d1.route);
    printf("Kms is %d\n", d1.kms);


    printf("For Driver No 2:\n Name is %s\n", d2.name);
    printf("DL number is %s\n", d2.dlno);
    printf("Route is %s\n", d2.route);
    printf("Kms is %d\n", d2.kms);


    printf("For Driver No 3:\n Name is %s\n", d3.name);
    printf("DL number is %s\n", d3.dlno);
    printf("Route is %s\n", d3.route);
    printf("Kms is %d\n", d3.kms);
    
    return 0;
}