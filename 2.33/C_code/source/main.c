#include<stdio.h>
#include<stdlib.h>
main()
{
	float total_kilometers, gas_of_money, avg_kilometers_per_gas, parking_fees,toll_per_day,total_cost;
	
	printf("total miles=");
	scanf_s("%f",&total_kilometers);
	printf("\n");
	printf("gas of money=");
	scanf_s("%f", &gas_of_money);
	printf("\n");
	printf("avg of miles per gas=");
	scanf_s("%f", &avg_kilometers_per_gas);
	printf("\n");
	printf("parking fees=");
	scanf_s("%f", &parking_fees);
	printf("\n");
	printf("toll per day=");
	scanf_s("%f", &toll_per_day);
	printf("\n");
	total_cost = (total_kilometers * avg_kilometers_per_gas)*gas_of_money + parking_fees + toll_per_day;
	printf("total cost=");
	printf("%f", total_cost);
	system("pause");
	return 0;
}