#include<stdio.h>

int main()
{
	int year;
	printf("\n Nhap nam: ");
	scanf("%d", &year);
	
	if(((year % 10 ==0)&& (year % 100 != 0)) || (year % 400 == 0))
		printf("La nam nhuan!");
	else
		printf("Khong la nam nhuan!");
		
	return 0;
}
