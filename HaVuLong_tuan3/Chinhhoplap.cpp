#include<stdio.h>
#include<conio.h>
#include<math.h>

int luythua(int n, int k) 
{
    int pow = 1;
    for (int i = 1; i <= k; i++)
        pow = pow * n;
    return (int)pow;
}

int main()
{
	int n, k;
	printf("Nhap k : ");
	scanf("%d", &k);
	printf("Nhap n : ");
	scanf("%d", &n);
	
	printf("Chinh hop lap : %d", luythua(n,k));
	getch();
	return 0;
}

