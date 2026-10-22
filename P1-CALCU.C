#include<stdio.h>
int main()
{
float num1 , num2 ;
char op;
printf("calculator");
printf("enter num1 :");
scanf("%f",&num1);
printf("enter num2 :");
scanf("%f",&num2);
printf("enter operation +,-,*,/ :");
scanf("%c",&op);
switch(op)
{
	case '+':
	printf("%f",num1 + num2);
	break;
	case '-':
	printf("%f",num1 - num2);
	break;
	case '*':
	printf("%f",num1 * num2);
	break;
	case '/':
	printf("%f",num1 / num2);
	break;
	default :
	printf("invalid operator");
	}
	return 0;
}