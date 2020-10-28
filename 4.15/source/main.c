#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	double principal =5000;
	double rate;
	
	printf("%4s%21s\n","Year","Amount on deposit");
	for (rate = 0.1; rate <= 0.125; rate = rate + 0.005)
	{
		printf("\n");
		printf("§Q²v=%.3f\n", rate);
		printf("\n");
		for (int year = 1; year <= 10; year++)
		{
			double amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);
		}
	}
}