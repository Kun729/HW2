#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i=0;
	float salesdollar;

	while (i == 0)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &salesdollar);
		if (salesdollar == -1)
		{
			break;
		}
		else
		{
			printf("Salary is $ %.2f\n", 200 + salesdollar*0.09);
		}
	}
}