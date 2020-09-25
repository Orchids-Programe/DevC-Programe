#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	printf("Nhap so n : ");
	scanf("%d", &n);
	
	for(int i = 1; i <= 10; i++)
		printf("%d x %d = %d\n", n,i, n*i);
	getch();
	return 0;
}
