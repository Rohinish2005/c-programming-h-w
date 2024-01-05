#include <stdio.h>
Balance=5000, deposit, withdraw;
int choice, pin, k;
char transaction ='y';
 
int main()
{
	while (pin != 1520)
	{
		printf("ENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 1520)
		printf("PLEASE ENTER VALID PIN NUMBER\n");
	}
	do
	{
		printf("********Welcome to ATM Service**************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("********************************************?*\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IN Rs : %lu ", Balance);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw >(Balance - 500))
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				Balance = Balance - withdraw;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS%lu", Balance);
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT");
			scanf("%lu", &deposit);
                        Balance = Balance + deposit;
			printf("YOUR BALANCE IS %lu", Balance);
			break;
		case 4:
			printf("\n THANK YOU FOR USING THE ATM SERVICE");
			break;
		default:
			printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	printf("\n\n THANKS FOR USING OUT ATM SERVICE");
    return 0;
}
 


