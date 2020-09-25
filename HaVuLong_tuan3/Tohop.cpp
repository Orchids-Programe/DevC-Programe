#include<stdio.h>
#include<conio.h>

int fact(int n)
{
	int fact = 1;
	for(int i = 1; i <= n; i++)
		fact = fact * i;
	return fact;
}

int C(int k, int n)
{
	return fact(n) / (fact(k)*fact(n-k));
}

int main()
{
	int k,n;
	printf("Nhap k : "); scanf("%d", &k);
	printf("Nhap n : "); scanf("%d", &n);
	
	printf("To hop bang : %d", C(k,n));
	getch();
	return 0;
}
