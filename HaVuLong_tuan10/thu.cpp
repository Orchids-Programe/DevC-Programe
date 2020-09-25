#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int m,n,max,step;
	printf("Nhap m va n : "); scanf("%d%d",&m,&n);
	int bcnn = 0;
	if(m > n)
	{
		max = step = m;
	}
	else 
	{
		max = step = n;
	}
	
	while(1)
	{
		if(max%m == 0 && max%n==0)
		{
			bcnn = max;
			break;
		}
		max = max + step;
	}
	printf("BCNN la : %d", bcnn);
	getch();
	return 0;
}
