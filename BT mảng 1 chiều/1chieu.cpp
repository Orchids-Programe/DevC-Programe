#include<stdio.h>
#include<conio.h>
#include<math.h>

void inputArr(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void outputArr(int a[], int n)
{
	
	for(int i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}

void find(int a[], int n, int x)
{
	printf("\nNhap gia tri x = "); scanf("%d",&x);
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			count++;
		}
	}
	if(count == 0)
	{
		printf("%d khong xuat hien trong day!",x);
	}
	else
	{
		printf("\n%d co xuat hien trong day %d lan!",x,count);
		printf("\n%d xuat hien tai cac vi tri: ",x);
		for(int i = 0; i < n; i++)
		{
			if(a[i] == x)
			{
				printf("%d\t",i);
			}
		}
	}
}

void avg(int a[], int n)
{
	int tong = 0;
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			tong = tong + a[i];
			count++;
		}
	}
	double A = tong/count;
	printf("\nTrung binh cong cua cac phan tu duong la : %.2lf",A);
}

int isPrime(int n)
{
	if(n < 2)
		return 0;
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

void printPrime(int a[], int n)
{
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(isPrime(a[i]) == 1)
		{
			count++;
		}
	}
	
	if(count == 0)
	{
		printf("\nKhong co phan tu nao la so nguyen to trong mang!");
	}
	else
	{
		printf("\nCo xuat hien phan tu la so nguyen to trong mang!");
		for(int i = 0 ; i < n; i++)
		{
			if(isPrime(a[i]) == 1)
			{
				printf("%d\t",a[i]);
			}
		}
	}
}

void sortArr(int a[], int n)
{
	int i, j, temp = 0;
	for(i = 0; i < n-1; i++)
	{
		for(j = i; j < n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nDay sau khi sap xep la : ");
	for(i = 0; i < n;i++)
	{
		printf("%d\t",a[i]);
	}
}

int main()
{
	int n,x;
	int a[n];
	printf("Nhap do dai mang n = "); scanf("%d",&n);
	inputArr(a,n);
	outputArr(a,n);
	find(a,n,x);
	avg(a,n);
	printPrime(a,n);
	sortArr(a,n);
	getch();
	return 0;
}













