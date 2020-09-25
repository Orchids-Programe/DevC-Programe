#include<stdio.h>
#include<conio.h>

int Q(int n)
{
	int fact = 1;
	for(int i = 1; i <= n; i++)
		fact = fact * i;
	return fact;
}

int main()
{
	int n;
	printf("Nhap n : ");
	scanf("%d", &n);
	
	printf("Hoan vi vong quanh la : %d", Q(n+1));
	getch();
	return 0;
}
