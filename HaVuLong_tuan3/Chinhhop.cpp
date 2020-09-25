#include<stdio.h>
#include<conio.h>

int fact(int n)
{
	int fact = 1;
	for(int i = 1; i <= n; i++)
		fact = fact * i;
	return fact;
}

int A(int k, int n)
{
	return fact(n) / fact(n-k);
}

int main()
{
	int k,n;
	printf("Nhap k : "); scanf("%d", &k);
	printf("Nhap n : "); scanf("%d", &n);
	
	printf("Chinh hop bang : %d",  A(k,n));
	getch();
	return 0;
}
