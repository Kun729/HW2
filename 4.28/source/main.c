#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number,time, amount,money;
	float salary,sale,price;

	printf("��J���u�N�X:");
	scanf_s("%d", &number);

	switch (number)
	{
	case 1:
		printf("��J�g�~:");
		scanf_s("%f", &salary);
		printf("�A���~��O%.2f:",salary);
		break;
	case 2:
		printf("��J�u�@�ɼ�:");
		scanf_s("%d", &time);

		if (time > 40)
		{
			printf("��J�u��:");
			scanf_s("%d", &money);
			salary = money * 40 + (time - 40)*money*1.5;
			printf("�A���~��O%.2f:", salary);
		}
		else
		{
			printf("��J�u��:");
			scanf_s("%d", &money);
			salary = money * time;
			printf("�A���~��O%.2f:", salary);
		}
		break;
	case 3:
		printf("��J�P����B:");
		scanf_s("%f", &sale);
		salary = 250+sale*0.057;
		printf("�A���~��O%.2f:", salary);
		break;
	case 4:
		printf("��J�Ͳ������`��:");
		scanf_s("%d", &amount);
		printf("��J�Ӫ������:");
		scanf_s("%f", &price);
		salary = amount * price;
		printf("�A���~��O%.2f:", salary);
		break;
	default:
		break;
	}
}