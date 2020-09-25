#include<stdio.h>
#include<conio.h>

int a[10][10], b[10][10], c[10][10];

void inputMatrixA(int a[][10], int m, int n)
{
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
}

void outputMatrixA(int a[][10], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}


void inputMatrixB(int b[][10], int m, int n)
{
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
}

void outputMatrixB(int b[][10], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}

void Cong(int c[][10], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("Ma tran sau khi cong la : \n");
	for(int i =0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d", c[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int a[10][10]; int b[10][10];
	int m,n;
	printf("Nhap so hang ma tran A n = "); scanf("%d",&n);
	printf("Nhap so cot ma tran A m = "); scanf("%d", &m);
	inputMatrixA(a,m,n);
	outputMatrixA(a,m,n);
	
	printf("Nhap so hang ma tran B n = "); scanf("%d",&n);
	printf("Nhap so cot ma tran B m = "); scanf("%d", &m);
	inputMatrixB(a,m,n);
	outputMatrixA(a,m,n);
	
	Cong(c,m,n);
	getch();
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	

