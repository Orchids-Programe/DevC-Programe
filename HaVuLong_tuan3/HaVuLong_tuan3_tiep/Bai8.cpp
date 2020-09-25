#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n = 1;
	double k, x, kq = 0, gt = 1;
	printf("Nhap gia tri cua x : ");
	scanf("%lf", &x);
	
	while(fabs(k/gt))
	{
		n = n + 2;
		gt = gt*n*(n-1);
		k = k*k*(-k);
		kq = kq + k/gt;
	}
	
	printf("sin(%.2lf) = %.2lf",x, sin(x));
	getch();
	return 0;
}
