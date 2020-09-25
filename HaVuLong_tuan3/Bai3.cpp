#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;
	printf("Nhap so a : ");
	scanf("%d", &a);
	printf("Nhap so b : ");
	scanf("%d", &b);
	
	if(a == 0 || b == 0)
		return a + b;
	
	while(a != b)
	{
		if(a>b)
			a = a - b;
		else
			b = b - a;
	}
	
	printf("UCLN la : %d", a);
	getch();
	return 0;
	
}
