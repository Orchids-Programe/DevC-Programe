#include<stdio.h>
#include<conio.h>

int main()
{
	int n, x;
	double gt = 1;
	printf("Nhap gia tri cua n : ");
	scanf("%d", &n);
	
	x = n % 2;
	for(int i = 1; i <= n; i++)
	{
		if(x == 0 && i % 2 ==0)
		{
			gt = gt * i;
		}
		else{
			if(x == 1 && i % 2 == 1)
				gt = gt * i;
		}
	}	
	
	printf("n!! = %.2lf", gt);
	getch();
	return 0;
}
