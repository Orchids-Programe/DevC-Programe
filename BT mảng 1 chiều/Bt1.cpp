/* Nhap 1 dãy so nguyên không quá 50 phan tu, in ra màn hình dãy so dã nhap

Ðua ra màn hình so lon nhat có trong dãy và vi trí cua nó trong dãy.

Sap xep dãy so theo giá tri các phan tu tang dan

Tính tong và trung bình cong các sa có trong dãy. */

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


