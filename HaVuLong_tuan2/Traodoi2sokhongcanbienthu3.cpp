#include<stdio.h>

int main()
{
	int a, b; // a = 11, b = 121
	printf("Nhap gia tri a = ");
	scanf("%d", &a);
	printf("Nhap gia tri b = ");
	scanf("%d", &b);
	
	printf("\n Gia tri truoc khi trao doi a = %d, b = %d \n\n", a, b);
	
	a = a + b; // 11 + 121 = 132
	b = a - b; // 132 - 121 = 11
	a = a - b; // 132 - 11 = 121
	
	printf("\n Gia tri sau khi trao doi la a = %d, b = %d \n\n", a, b);
	
	return 0;
	
}
