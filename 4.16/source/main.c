#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("(A)\n");
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
			printf(" ");
			printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("(B)\n");
	printf("\n");
	for (int i = 0; i < 9; i++)
	{
		for (int j = 9; j > i; j--)
		{
			printf("%s", "*");
		}
			printf(" ");
			printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("(C)\n");
	printf("\n");
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int n = 0; n <= 9 - i; n++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("(D)\n");
	printf("\n");
	for (int i = 0; i <= 9; i++) 
	{
		for (int j = 1; j <= 9 - i; j++)
		{
			printf(" ");
		}
		for (int n = 0; n <= i; n++)
		{
			printf("*");
		}
		printf("\n");
	}
}