#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void inputMatrix(int **a, int m, int n)
{
	int i,j;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d", &a[i][j]);
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

int snt(int n)
{
	int count = 0;
	if(n < 4)
		return 0;
	for( int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			count++;
		}
	}
	if(count == 3)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void sogannguyento(int **a, int m,int n)
{
	int i,j;
	int count=0;
	for(i = 0; i < m; i++)
	{
		for(j= 0; j < n; j++)
		{
			if(snt(a[i][j]) == 1)
			{
				count++;
			}
		}
	}
	if(count == 0)
	{
		printf("Trong ma tran khong co so gan nguyen to!");
	}
	else
	{
		printf("Trong ma tran co %d so gan nguyen to",count);
		
	}
}

void nguyenduongchan(int **a, int m, int n)
{
	int i,j;
	int max = a[0][0];
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i][j] > 0 && a[i][j] % 2 == 0 && max < a[i][j])  //*(*(a+i)+j)
			{
				max = a[i][j];
			}
		}
	}
	printf("\nSo nguyen duong chan lon nhat trong day la : %d",max);
	if(max == a[i][j])
	{
		printf("\nVi tri co phan tu duong chan lon nhat la a[%d][%d]",i,j );
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
	printf("Ma tran la : \n");
	outputMatrix(a,m,n);
	for(i = 0; i < m; i++)
	{
		free(a[i]);
	}
	sogannguyento(a,m,n);
	nguyenduongchan(a,m,n);
	free(a);
	getch();
	return 0;
}
