#include<stdio.h>
#include<conio.h>
#include<math.h>
int a[100][100];
int b[100][100];
int c[100][100];
int d[100][100];


int maxhang = 0,maxcot =0, sum = 0,m,n,p,q,i,j,tg,x;
//m,p hang n,q cot

void inputMatrix(int a[100][100],int m, int n)
{
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void outputMatrix(int a[100][100],int m, int n)
{
	for(i = 0; i < m; i++)
	{
		for(j = 0;j < n; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

void find(int a[100][100],int m, int n)
{
	int count = 0;

	for(i =0; i < m; i++)
	{
		for(j = 0; j < n;j++)
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
	
	for(i = 0; i < m; i++)
	{
		for( j = 0; j < n; j++)
		{
			if(a[i][j] == x)
			{
				printf("\nVi tri xuat hien cua %d la a[%d][%d]",x,i,j);
			}
		}
	}
}

void chuyenvi(int a[100][100],int m, int n)
{
	for(j = 0; j < n; j++)
	{
		for(i = 0; i < m; i++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

void totalMatrix(int c[100][100],int a[100][100],int b[100][100],int m, int n)
{
	for(i =0; i < m; i++)
	{
		for(j = 0; j < n ;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	outputMatrix(c,m,n);
}

void multiplicationMatrix(int d[100][100],int m, int n, int p, int q)
{
	
	
	int i,j,k;
	if(n== p){
	
			
		printf("tich hai ma tran la:\n");
		for(i=0;i<m;i++){
			for(j=0;j<q;j++){
				d[i][j]=0;
				for(k=0;k<p;k++){
					d[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	outputMatrix(d,m,q);
			
	}
	
}


int maxSumRow(int a[100][100], int m, int n)
{
	int maxRow = 0, sum = 0;
	for(i = 0; i< m ; i++)
	{
		int tg = 0;
		for(j = 0;j < n; j++)
		{
			tg += a[i][j];
		}
		if(i = 0 || tg > sum)
		{
			sum = tg;
			maxRow = i;
		}
	}
	printf("\nTong gia tri cua cac phan tu cua hang %d la lon nhat bang %d",maxRow,sum);
}

void maxSumCol(int a[100][100], int m, int n)
{
	int maxCol = 0, sum = 0;
	for(i = 0; i < m; i++)
	{
		int tg = 0;
		for(j = 0; j < n; j++)
		{
			tg += a[i][j];
		}
		if(j == 0 || tg > sum)
		{
			sum = tg;
			maxCol = j;
		}
	}
	printf("\n Tong gia tri cua cac phan tu cua cot %d la lon nhat bang %d\n",maxCol, sum);
}

void convertMatrix(int a[100][100], int m, int n)
{
	int i,j,k,f[100],sum = 0;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			sum++;
		}
		f[i] = sum;
	}
	
	for(i = 0; i< m-1; i++)
	{
		for(k = i+1; k < m; k++)
		{
			if(f[i] < f[k])
			{
				int tg = f[i];
				f[i] =f[k];
				f[k] = tg;
				
				for(j = 0; j < n; j++)
				{
					tg = a[i][j];
					a[i][j] = a[k][j];
					a[k][j] = tg;
				}
			}
			
		}
	}
	outputMatrix(a,m,n);
}


int main()
{
	int a[100][100];
	int b[100][100];
	int c[100][100];
	
	printf("Nhap so hang m = "); scanf("%d", &m);
	printf("Nhap so cot n = "); scanf("%d", &n);
	inputMatrix(a,m,n);
	outputMatrix(a,m,n);
	printf("Nhap x = "); scanf("%d",&x);
	find(a,m,n);
	printf("\nChuyen vi cua ma tran\n");
	chuyenvi(a,m,n);
	
	//nhap ma tran b
	printf("Nhap so hang p = "); scanf("%d", &p);
	printf("Nhap so cot q = "); scanf("%d", &q);
	inputMatrix(b,m,n);
	outputMatrix(b,m,n);
	printf("Tong hai ma tran la");
	totalMatrix(c,a,b,m,n);
	
	printf("\nTich hai ma tran la");
	multiplicationMatrix(d,m,n,p,q);
	maxSumCol(a,m,n);
	maxSumRow(a,m,n);
	convertMatrix(a,m,n);
	
	
	
	
	getch();
	return 0;
}


