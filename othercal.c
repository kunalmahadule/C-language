#include<stdio.h>
#include<conio.h>
int main()
{
int num1;
int num2;
char op;
int result;

printf("enter the first number:");
scanf("%d",&num1);

printf("enter the operation :");
scanf(" %c",&op);

printf("enter the second number:");
scanf("%d",&num2);

switch(op)
{
case '-':
result = num1-num2;
printf("%d",result);
break;

case '+':
result = num1+num2;
printf("%d",result);
break;

case '*':
result = num1*num2;
printf("%d",result);
break;

case '/':
result = num1/num2;
printf("%d",result);
break;

default :
printf("the operator is not valid:");
}
getch();

}