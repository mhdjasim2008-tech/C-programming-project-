#include<stdio.h>
#include<conio.h>
int main()
{
	int pin = 1234;
	int enteredpin;
	int choice;
	float balance=5000;
	float amount;

	printf("==========Welcome to ATM==========");

	printf("\nEnter your PIN:");
	scanf("%d",&enteredpin);

	if(enteredpin != pin)
	{
		printf("Invalid PIN...!!\n");
		return 0;
	}

		printf("\nLogin Successful...!!\n");

do
{
	printf("\n==========ATM Menu==========\n");

	printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");

	printf("Enter your Choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("Your Balance: Rs. %.2f\n",balance);
			break;

		case 2:
			printf("Enter Your Deposite Amount:");
			scanf("%f",&amount);
			if(amount>0)
			{
				balance+=amount;
				printf("Money Deposited Successfully...!!\n");
				printf("New Balance: Rs. %.2f\n",balance);
			}
			else
			{
				printf("Invalid Amount...!!\n");
			}
			break;
		case 3:
			printf("Enter Withdrawl Amount: ");
			scanf("%f",&amount);
			if(amount<=0)
			{
				printf("Invalid Amount...!!\n");
			}
			else if(amount<=balance)
			{
				balance-=amount;
				printf("Please Collect Your Cash...!!\n");
				printf("Remaining Balance: Rs. %.2f\n",balance);
			}
			else
			{
				printf("Insufficient Balance...!!\n");
			}
			break;
		case 4:
			printf("Thank you for using ATM...!!\n");
			break;
		default:
			printf("Invalid Choice...!!\n");
	}
}while(choice != 4);
return 0;
}
