#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n, j;
	printf("��J����:");
	scanf_s("%d", &n);
	printf("��J�e��:");
	scanf_s("%d", &j);
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= j; k++)
		{
			if (i == 1 || k == 1 || i == n || k == j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}