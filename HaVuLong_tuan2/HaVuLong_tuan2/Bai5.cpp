#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a, x;
	float X;
	printf("Nhap so a : \n");
	scanf("%d", &a);
	printf("Nhap so x : \n");
	scanf("%d", &x);
	X = exp(x*log(a));
	printf("Gia tri cua a^x = %.2f", X);
	getch();
	return 0;
	
}
