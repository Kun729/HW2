#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int accountnumber;
	float Bbmonth,newbalance, Tcmonth,Tcamonth,limit;
	int i = 0;
	
	while (i == 0)
	{

		printf("Enter account number (-1 to end ):");
		scanf_s("%d", &accountnumber);
		if (accountnumber == -1)
		{
			break;
		}
		else
		{
			printf("Enter begining balance:");
			scanf_s("%f", &Bbmonth);
			printf("Enter total charges:");
			scanf_s("%f", &Tcmonth);
			printf("Enter total credits:");
			scanf_s("%f", &Tcamonth);
			printf("Enter credit limit:");
			scanf_s("%f", &limit);
			newbalance = Bbmonth + Tcmonth - Tcamonth;
			if (newbalance > limit)
			{
				printf("Account:%d\n", accountnumber);
				printf("Credit limit:%.2f\n", limit);
				printf("Balance:%.2f\n", newbalance);
				printf("Credit Limit Exceeded.\n");
			}
		}
	}
}