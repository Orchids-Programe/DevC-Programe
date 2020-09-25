#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, S;
	printf("Chieu dai a = ");
	scanf("%f", &a);
	printf("Chieu rong b = ");
	scanf("%f", &b);
	S = a*b;
	printf("Dien tich hinh chu nhat = %.2f", S);
	getch();
}
