#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
	int a,b,max,step,bcnn=0;
	printf("Nhap hai gia tri a va b : "); 
	scanf("%d%d", &a,&b);
	if(a > b)
		max = step = a;
	else 
		max = step = b;
	
	while(1)
	{
		if(max % a == 0 && max % b == 0)
		{
			bcnn = max;
			break;
		}
		max = max + step;
	}
	printf("BCNN cua %d va %d la : %d",a,b,bcnn);
	
	getch();
	return 0;
}
