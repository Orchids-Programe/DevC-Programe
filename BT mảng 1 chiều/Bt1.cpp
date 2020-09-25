/* Nhap 1 d�y so nguy�n kh�ng qu� 50 phan tu, in ra m�n h�nh d�y so d� nhap

�ua ra m�n h�nh so lon nhat c� trong d�y v� vi tr� cua n� trong d�y.

Sap xep d�y so theo gi� tri c�c phan tu tang dan

T�nh tong v� trung b�nh cong c�c sa c� trong d�y. */

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
		printf("%d\t",a[i]);
	}
}

void findmax(int a[], int n)
{
	int i;
	int max = a[0];
	for(i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	printf("\nSo lon nhat trong day la : %d",max);
	for(i = 0; i < n; i++)
	{
		if(a[i] == max)
		{
			printf("\nVi tri cua phan tu lon nhat la %d",i+1);
		}
	}
}

void sort(int a[], int n)
{
	int i, j, temp;
	for(i = 0; i < n; i++)
	{
		if(a[i] > a[j])
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	printf("\nDay sau khi da sap xep la : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}

void tongvatbc(int a[], int n)
{
	int i, sum = 0;
	for(i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	printf("\nTong cua day la : %d",sum);
	printf("Trung binh cong cac so trong day la : %f", (float) sum/n);
}
int main()
{
	int n;
	int a[n];
	printf("Nhap do dai cua mang : "); scanf("%d",&n);
	inputArr(a,n);
	printf("Mang do la : \n");
	outputArr(a,n);
	findmax(a,n);
	sort(a,n);
	getch();
	return 0;
}


