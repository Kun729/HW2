#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hour,i=0;
	float rate,salary;

	while (i == 0)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &hour);
		if (hour == -1)
		{
			break;
		}
		else
		{
			printf("Enter hourly rate of the worker($00.00):");
			scanf_s("%f", &rate);
			if (hour > 40)
			{
				salary =40*rate + (hour - 40)*rate*1.5;
				printf("Salary is $%.2f\n", salary);
			}
			else
			{
				salary = hour*rate;
				printf("Salary is $%.2f\n", salary);
			}
		}
	}
}