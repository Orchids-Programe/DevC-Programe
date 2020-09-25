#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[10][10];
	int b[10][10];
	int c[10][10];
	int m,n,x,d; //m hang, n cot
	
	printf("Nhap so hang m = "); scanf("%d", &m);
	printf("Nhap so cot n = "); scanf("%d", &n);
	
	printf("Nhap ma tran A : \n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	
	
	printf("In ra ma tran A\n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Nhap gia tri x = "); scanf("%d", &x);
	int count = 0;
	for(int i = 0; i < m;i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] == x)
			{
				count++;
			}
		}
	}
	
	if(count == 0)
	{
		printf("%d khong xuat hien trong mang",x);
	}
	else
	{
		printf("%d co xuat hien trong mang!",x);
	}
	printf("\nSo lan xuat hien cua %d la : %d",x,count);
	
	for(int i = 0; i < m;i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] == x)
			{
				printf("\nVi tri xuat hien cua %d la : a[%d][%d]",x,i,j);
			}
		}
	}
	

	
	
	printf("\nNhap ma tran B : \n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d", &b[i][j]);
		}
	}

	printf("In ra ma tran B\n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("Tong hai ma tran la : \n");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	printf("\nChuyen vi cua ma tran A la : \n");
	for(int i =0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			a[i][j] = a[j][i];
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	
	
	printf("\nTich cua hai ma tran la : ");
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for(int h = 0 ; h < d; h++)
				c[i][j] += a[i][h]*b[h][j];
		}
		printf("\n");
	}
	
	for(int i =0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	
	//tim hang co tong cac phan tu lon nhat cua ma tran a
	float s = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			s = s + a[i][j];	
		}
	}
	
	
	

	getch();
	return 0;
}

















