/*Nhap vào mot ma tran n x m, in ra ma tran vua nhap duoi dang bang

Hien thi và tính tong các phan tu trên hàng chan cua ma tran

Tim giá tri lon nhat trên cot 1 cua ma tran */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void inputMatrix(int a[10][10], int m, int n)
{
	int i,j;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ", i,j);
			scanf("%d", &a[i][j]);
		}
	}
}

void outputMatrix(int a[10][10], int m, int n)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void tonghangchan(int a[10][10], int m, int n)
{
	int i,j;
	int sum = 0;
	for(i = 0; i < m; i = i+2)
	{
		for(j = 0; j< n; j++)
		{
			sum = sum + a[i][j];
		}
	}
	printf("Tong cac phan tu cua hang chan la : %d", sum );
}

void maxcot1(int a[10][10], int m, int n)
{
	int i,j;
	int max;
	max = a[0][0];
	for(i = 0; i < m; i++)
	{
		if(a[i][0] > max)
		{
			max = a[i][0];
		}
	}
	printf("\nGia tri max cua cot 1 la : %d", max);
}

int main()
{
	int i,j,m,n;
	int a[10][10];
	printf("Nhap so hang cua ma tran a: "); scanf("%d",&m);
	printf("Nhap so cot cua ma tran a : "); scanf("%d",&n);
	inputMatrix(a,m,n);
	printf("Ma tran a la : \n");
	outputMatrix(a,m,n);
	tonghangchan(a,m,n);
	maxcot1(a,m,n);
	getch();
	return 0;
}
