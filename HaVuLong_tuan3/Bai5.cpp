#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n;
	float S = 0;
	printf("Nhap so n : ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
		S = S + 1/(float)i;
	
	printf("Gia tri S = %.2f", S);
	getch();
	
}
