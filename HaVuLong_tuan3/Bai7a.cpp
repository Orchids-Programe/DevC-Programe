#include<stdio.h>
#include<conio.h>

int main()
{
	int i, n, gt = 1;
	printf("Nhap so n : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
		gt = gt*i;
	
	printf("Ket qua la : %d",gt);
	getch();
}
