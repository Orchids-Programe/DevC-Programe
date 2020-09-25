#include<stdio.h>
#include<math.h>

int main()
{
	float x1=5, y1=6, x2=4, y2=5,dx,dy, D ;
	dx = x2 - x1;
	dy = y2 - y1;
	D = sqrt(dx*dx + dy*dy);
	printf("The distance is %5.2f \n", D);
	return 0;
}
