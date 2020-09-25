/*Nhap 1 d�y n so nguy�n (0<n<30), in ra m�n h�nh d�y so d� nhap

�ua ra m�n h�nh c�c so chan v� va tr� so chan d� trong d�y

Sap xep d�y so theo gi� tri c�c phan tu giam dan.

Ch�n so X v�o d�y sao cho sau khi ch�n gia tri c�c phan tu van giam dan(x nhap tu b�n ph�m). */
#include<stdio.h>
#include<conio.h>
#include<math.h>

void inputArr(int a[], int n)
{
	int i;
	for(i =0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
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

void findsochan(int a[], int n)
{
	int i;
	for(i =0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			printf("\nSo chan %d nam o vi tri thu %d",a[i], i+1);
		}
	}
}

void sort(int a[], int n)
{
	int i, j, temp;
	for(i = 0; i < n; i++)
	{
		if(a[i] < a[j])
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	printf("\nDay sau khi da sap xep giam dan la : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}

void chenX(int a[], int n)
{
	int x;
	printf("\nNhap gia tri can chen x = "); scanf("%d",&x);
	int i = 0, v = 0;
	while(a[i] > x)
	{
		i++;
	}
	v = i;
	for(i = n-1; i >= v; i--)
	{
		a[i+1] = a[i];
	}
	a[v] = x;
	printf("\nDay sau khi da chen la : \n");
	for(i = 0; i < n+1; i++)
	{
		printf("%d\t",a[i]);
	}
}

int main()
{
	int n; 
	int a[n];
	printf("Nhap so phan tu cua  mang : "); scanf("%d",&n);
	inputArr(a,n);
	printf("Mang do la : ");
	outputArr(a,n);
	findsochan(a,n);
	sort(a,n);
	chenX(a,n);
	getch();
	return 0;
}
