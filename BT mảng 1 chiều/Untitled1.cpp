#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float p,S;
	printf("Nhap kich thuoc 3 canh cua tam giac");
	scanf("%d%d%d",&a,&b,&c);
	if(a >= b+c || b >= a+c || c >= a+b)
	{
		printf("Khong ton tai tam giac");
	}
	else
	{
	
		printf("3 canh vua nhap la cac canh cua 1 tam giac");
		
		p = (a+b+c)/2;
		S = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nDien tich tam giac la : %.2f",S);
		
	}
	getch();
	return 0;
}
