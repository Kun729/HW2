#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number,time, amount,money;
	float salary,sale,price;

	printf("輸入員工代碼:");
	scanf_s("%d", &number);

	switch (number)
	{
	case 1:
		printf("輸入週薪:");
		scanf_s("%f", &salary);
		printf("你的薪資是%.2f:",salary);
		break;
	case 2:
		printf("輸入工作時數:");
		scanf_s("%d", &time);

		if (time > 40)
		{
			printf("輸入工資:");
			scanf_s("%d", &money);
			salary = money * 40 + (time - 40)*money*1.5;
			printf("你的薪資是%.2f:", salary);
		}
		else
		{
			printf("輸入工資:");
			scanf_s("%d", &money);
			salary = money * time;
			printf("你的薪資是%.2f:", salary);
		}
		break;
	case 3:
		printf("輸入銷售金額:");
		scanf_s("%f", &sale);
		salary = 250+sale*0.057;
		printf("你的薪資是%.2f:", salary);
		break;
	case 4:
		printf("輸入生產物件總數:");
		scanf_s("%d", &amount);
		printf("輸入該物件價格:");
		scanf_s("%f", &price);
		salary = amount * price;
		printf("你的薪資是%.2f:", salary);
		break;
	default:
		break;
	}
}