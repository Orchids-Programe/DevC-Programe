#include<stdio.h>
#include<conio.h>
#include<math.h>

int fact(int n)
{
	int fact = 1;
	for(int i = 1; i <= n; i++)
		fact = fact * i;
	return fact;
}

int F(int k, int n)
{
	int temp = 1;
	for(int i = 1; i <= k; i++)
		temp = temp * n;
	return temp;
}

int A(int k, int n)
{
	return fact(n)/fact(n-k);
}

int P(int n)
{
	return fact(n);
}

int Q(int n)
{
	return fact(n+1);
}

int C(int k, int n)
{
	return fact(n)/(fact(k)*fact(n-k));
}

int main()
{
	int n,k;
	printf("Nhap n : "); scanf("%d", &n);
	printf("Nhap k : "); scanf("%d", &k);
	
 	printf("Chinh hop lap la : %d\n",F(k,n));
 	printf("Chinh hop la : %d\n",A(k,n));
 	printf("Hoan vi la : %d\n",P(n));
 	printf("Hoan vi vong quanh la : %d\n",Q(n));
 	printf("To hop la : %d\n", C(k,n));
 	
 	getch();
 	return 0;
}










