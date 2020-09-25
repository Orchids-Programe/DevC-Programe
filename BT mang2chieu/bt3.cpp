/* Nhap vào mot ma tran n x m, in ra ma tran vua nhap duoi dang bang

Sap xep hàng 2 theo chieu giá tri các phan tu giam dan.

Ðua ra màn hình tong các phan tu trong ma tran

Tim giá tri lon nhat trong mang.

Tìm giá tri nho nhat chia het cho 3 có trong mang */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void inputMatrix(int a[10][10], int m, int n)
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
void outputMatrix(int a[10][10], int m, int n)
{
	int i,j;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
void sort(int a[10][10], int m, int n)
{
	int temp, k,j;
	for(j = 0; j < n-1; j++)
	{
		for(k = j+1; k < n; k++)
		{
			if(a[1][j] < a[1][k])
			{
				temp = a[1][j];
				a[1][j] = a[1][k];
				a[1][k] = temp;
			}
		}
	}
	printf("\nMa tran sau khi sap xep hang 2 la : ");
	for(j = 0; j < n; j++)
	{
		printf("%d\t",a[1][j]);
	}
}
void sum(int a[10][10], int m, int n)
{
	int i,j, sum = 0;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			sum = sum + a[i][j];
		}
	}
	printf("\nTong cac phan tu cua ma tran la : %d",sum);
}
void findmax(int a[10][10], int m, int n)
{
	int i,j;
	int max = a[0][0];
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	printf("\nGia tri lon nhat cua ma tran la : %d",max);
}
void minchiahet3(int a[10][10], int m,int n)
{
	int i,j,min, kt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]%3==0)
            {    
                min=a[i][j];
                kt=1;
                break;
            }
        }
    }
    if(kt==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0; j<m; j++)
            {
                if((a[i][j]%3==0)&&(a[i][j]<min))
                {
                    min=a[i][j];
                }
            }
        }
    printf("\nso nho nhat trong cac so chia het cho 3 co trong day la %d", min);
    }
    else    
    {
        printf(" trong mang vua nhap khong co so chia het cho 3");
    }
}
int main()
{
	int i,j,m,n;
	int a[10][10];
	printf("Nhap so hang : "); scanf("%d",&m);
	printf("Nhap so cot : "); scanf("%d",&n);
	inputMatrix(a,m,n);
	printf("Mang do la : \n");
	outputMatrix(a,m,n);
	sort(a,m,n);
	sum(a,m,n);
	findmax(a,m,n);
	minchiahet3(a,m,n);
	getch();
	return 0;
}
