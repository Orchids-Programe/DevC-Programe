#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int **inputMatrix(int m, int n)
{
	int **a = (int **)malloc(m*sizeof(int *));
	for(int i = 0; i < m; i++)
	{
		a[i] = (int *)malloc(n*sizeof(int));
		for(int j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	return a;
}

void outputArray(int **a, int m, int n)
{
	printf("Ma tran la : \n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int **a,m,n,p;
	printf("Nhap so hang : "); scanf("%d",&m);
	printf("Nhap so cot : "); scanf("%d",&n);
	a = inputMatrix(m,n);
	outputArray(a,m,n);
	getch();
	return 0;
}




