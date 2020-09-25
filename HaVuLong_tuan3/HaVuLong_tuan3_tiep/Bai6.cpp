#include<stdio.h>
#include<conio.h>

int main()
{
	int n = 0;
	double S = 0, a;
	printf("Nhap so a : ");
	scanf("%lf", &a);
	
	while(S <= a)
	{
		n++;
		S = S + 1.0/n;
	}
	
	printf("Gia tri n : %d",n);
	getch();
	return 0;
}
