#include<stdio.h>

int main()
{
	int a, b, temp;
	printf("Nhap gia tri a = ");
	scanf("%d", &a);
	printf(" \n Nhap gia tri b = ");
	scanf("%d", &b);
	
	printf("Truoc khi trao doi a = %d, b = %d \n\n", a, b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\n Sau khi trao doi a = %d, b = %d \n\n", a, b);
	
	return 0;
}
