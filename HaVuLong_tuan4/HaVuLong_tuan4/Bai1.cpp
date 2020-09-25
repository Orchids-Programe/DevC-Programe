#include<stdio.h>
#include<conio.h>


int ucln(int a, int b)
{
	int x; //UCLN cua a va b
       (a>b)?(x=b):(x=a);
       while((a%x!=0)||(b%x!=0))
       		x--;
       return x;
	
}

int main()
{
	int a, b, c;
	printf("Nhap ba so a, b, c : ");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("UCLN cua ba so %d, %d, %d la : %d", a, b, c, ucln(c, ucln(a,b)));
	getch();
	return 0;
	
}
