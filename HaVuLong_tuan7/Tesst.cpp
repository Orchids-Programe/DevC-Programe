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
	
	float s = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			s = s + a[i][j];	
		}
	}
	printf("\nTong cac phan tu cua cac hang la : %.2f",s);
	
	
	
	
	
	
	
	
	getch();
}
