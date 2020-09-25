/* Nhap ma tran n x n so nguyên. Tìm phan tu lon nhat trên duong chéo chính.

Kiem tra ma tran vua nhap xem có phai là ma tran don vi không */
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

int maxdc(int a[10][10], int m, int n)
{
	int i,j;
	int max;
	max = a[0][0];
	for(i = 0; i < m; i++)
	{
		if(a[i][i] > max)
		{
			max = a[i][i];	
		} 
	}
	printf("\nPhan tu lon nhat tren duong cheo chinh la : %d",max);
}

void testmatrandonvi(int a[10][10], int m, int n)
{
	int i,j;
	int kt = 0;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(((i == j)&&(a[i][j] != 1)) || ((i != j)&&(a[i][j] != 0)))
			{
				kt = 0;
			}
		}
	}
	if(kt == 0)
	{
		printf("\nMa tran khong phai ma tran don vi!");
	}
	else
		printf("\nMa tran da cho la ma tran don vi!");
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
	maxdc(a,m,n);
	testmatrandonvi(a,m,n);
	getch();
	return 0;
}



