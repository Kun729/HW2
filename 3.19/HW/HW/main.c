#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int principal, day;
	float interest, rate;
	int i = 0;

	while (i == 0)
	{
		printf("Enter loan principal (-1 to end):");
		scanf_s("%d", &principal);
		if (principal == -1)
		{
			break;
		}
		else
		{
			printf("Enter interest rate:");
			scanf_s("%f", &rate);
			printf("Enter term of the loan in days:");
			scanf_s("%d", &day);
			interest = principal * rate* day / 365;
			printf("The interest charge is $%.2f\n",interest);
		}
	}
}