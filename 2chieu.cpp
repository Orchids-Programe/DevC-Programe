#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void inputMatrix(int **a, int m,int n)
{
	int i,j;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void outputMatrix(int **a, int m, int n)
{
	int i,j;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
void fine(int **a, int m, int n)
{
	int count = 0, x;

	for(int i =0; i < m; i++)
	{
		for(int j = 0; j < n;j++)
		{
			if(a[i][j] == x)
			{
				count++;
			} 
		}
	}
	
	if(count == 0)
	{
		printf("%d khong xuat hien trong ma tran",x);
	}
	else
	{
		printf("%d xuat hien trong ma tran",x);
	}
	
	printf("\nSo lan xuat hien cua %d trong ma tran la : %d",x,count);
	
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] == x)
			{
				printf("\nVi tri xuat hien cua %d la a[%d][%d]",x,i,j);
			}
		}
	}
}
int main()
{
	int **a,m,n,i,j;
	printf("Nhap so hang : "); scanf("%d",&m);
	printf("Nhap so cot : "); scanf("%d",&n);
	a = (int **)malloc(m*sizeof(int *));
	for(i = 0; i < m; i++)
	{
		a[i] = (int *)malloc(n*sizeof(int));
	}
	inputMatrix(a,m,n);
	printf("\nMang do la : \n");
	outputMatrix(a,m,n);
	for(i = 0; i < m; i++)
	{
		free(a[i]);
	}
	free(a);
	fine(a,m,n);
	getch();
	return 0;
}
