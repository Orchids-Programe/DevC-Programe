#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int N, n, a, b, c;
	printf("Nhap mot so co 3 chu so: \n");
	scanf("%d", &N);
	a = N/100;
	printf("Chu so hang tram la : %d \n", a);
	n = N%100;
	b = n/10;
	printf("Chu so hang chuc la : %d \n", b);
	c = n%10;
	printf("Chu so hang don vi la : %d \n", c);
	
	getch();
	return 0;
}
