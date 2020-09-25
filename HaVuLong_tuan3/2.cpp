#include "stdio.h"
#include "math.h"
int main()
{
	double x,GT=1,S,i=1;

	int n;

	printf("Nhap n :");
	scanf("%d",&n);

	printf("Nhap so x la giai thua : ");
	scanf("%lf",&x);

	for (i=1;i<=n;i++)
	{
		for (i=1;i<=n;i++)
		{
			GT = GT*i;
			if ((GT >= 6 )&&((i/2)!=0))
			{
				break;
			}
		}
		S = (((pow((-1),i))*(pow(x,2*i+1)))/(GT));
	}
	printf("Sin(x) la : %lf \n ",x+S);
}

