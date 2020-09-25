/* Nhap 1 d�y so thuc kh�ng qu� 50 phan tu, dua ra m�n h�nh tong c�c so duong trong d�y.

X�a tat ca c�c so �m c� trong d�y.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void inputArr(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void outputArr(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}

void tong(int a[], int n)
{
	int i, sum = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			sum = sum + a[i];
		}
	}
	printf("\nTong cac so duong cua day la : %d",sum);
}

void xoasoam(int a[], int n)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			for(j = i; j < n-1; j++)
			{
				a[j] = a[j+1];
			}
			n = n-1;
		}
	}
	printf("\nDay sau khi da xoa phan tu am la : \n");
	for(i = 0 ; i < n; i++)
	{
		printf("%d\t",a[i]);
	}
}

int main()
{
	int n; 
	int a[n];
	printf("Nhap do dai mang : "); scanf("%d",&n);
	inputArr(a,n);
	printf("Mang do la : \n");
	outputArr(a,n);
	tong(a,n);
	xoasoam(a,n);
	getch();
	return 0;
}

