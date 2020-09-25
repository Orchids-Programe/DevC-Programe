#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float x;
	float sin = 1;
	printf("Nhap goc : ");
	scanf("%f", &x);
	
	for(int i = 0; i <= 13; i++)
	{
		int k;
		if(i%2==0){
			k = -1;
		}
		else{
			k = 1;
		}
		float m = (float) x/(2*i+1);
		sin = sin + k*m;
	}
	printf("Sin(x) = %f",sin);
	getch();
	return 0;
}
