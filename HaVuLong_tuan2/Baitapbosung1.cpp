#include<stdio.h>
#include<conio.h>

int main()
{
	int n, giaithua = 1, i = 1;
	float S = 0;
	printf(" Nhap n : ");
	scanf("%d", &n);
	for(i=1; i <= n; i++)
	{
		giaithua = giaithua*i;
		S = S + 1.0/giaithua;
	}
	
	printf("\n Gia tri cua tong S = %.2f ", S);
	getch();
	
}
