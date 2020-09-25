#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void inputArray(int *a, int n)
{
	int i; 
	for(i = 0 ; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d",(a+i));
	}
}

void outputArray(int *a, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d\t",*(a+i));
	}
}

void kiemtra(int *a, int n)
{
	int i,k;
	printf("\nNhap k : "); scanf("%d",&k);
	int count = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			count++;
		}
	}
	if(count == k)
	{
		printf("\nTrong day co %d phan tu duong dung canh nhau",k);
	}
	else
	{
		printf("\nTrong day khong co %d phan tu duong canh nhau!",k);
	}
}

int main()
{
	int *a,i,n;
	printf("Nhap do dai mang : "); scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	inputArray(a,n);
	printf("\nMang do la : \n");
	outputArray(a,n);
	kiemtra(a,n);
	free(a);
	getch();
	return 0;
	
}
