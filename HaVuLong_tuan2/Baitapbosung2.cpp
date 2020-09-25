#include<stdio.h>
#include<conio.h>

int main()
{
	int n, i;
	float S = 0;
	do{
		printf("Nhap so n > 0: ");
		scanf("%d", &n);
	}
	while(n <= 0);
	
	
	for(int i=1; i <= n; i++)
	{
		S = S + 1/(float)i;
	}
	
	printf("\n Tong S = %.2f", S);
	getch();
	
}

