#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n, a;
	printf("Nhap so n : ");
	scanf("%d", &n);
	a = sqrt(n);
	
	if(a*a == n)
		printf("%d la so chinh phuong!",n);
	else
		printf("%d khong la so chinh phuong!",n);
	
	getch();
	return 0;
}
