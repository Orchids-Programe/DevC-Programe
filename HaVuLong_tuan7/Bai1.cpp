#include<stdio.h>

void inputMatrix(int a[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
}

void outputMatrix(int a[][100], int m, int n)
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

void xuathien(int a[][100], int n, int m, int x)
{
	int count = 0;
	for(int i =0 ; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] == x)
			{
				printf("%d co xuat hien trong mang!",x);
				count = count + 1;
			}
			else
				printf("%d khong xuat hien trong mang!");
		}
	}
	printf("\nSo lan xuat hien cua %d la : %d",x,count);
	printf("\nVi tri xuat hien cua %d la : ",x,a);
}

int main()
{
	int a[100][100];
	int m,n,x;
	printf("Nhap so hang n = "); scanf("%d",&n);
	printf("Nhap so cot m = "); scanf("%d", &m);
	printf("Nhap vao ma tran : \n");
	inputMatrix(a,m,n);
	outputMatrix(a,m,n);
	printf("Nhap x = "); scanf("%d",&x);
	xuathien(a,n,m,x);
	
	
}
