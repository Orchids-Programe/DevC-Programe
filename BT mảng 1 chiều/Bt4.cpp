/*Nhap 1 d�y so nguy�n kh�ng qu� 50 phan tu, 
dua ra m�n h�nh trung b�nh cong c�c so chia het cho 3 c� trong d�y. 
Ch�n so X v�o vi tr� thu k trong d�y(x,k nhap tu b�n ph�m)*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void inputArr(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
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

void tbc(int a[], int n)
{
	int i;
	int sum = 0, count = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 3 == 0)
		{
			sum = sum + a[i];
			count++;
		}
	}
	printf("\nTrung binh cong cua cac so chia het cho 3 la : %f",(float) sum/count);
}

void chenXvaovtk(int a[], int n)
{
	int i,x,k;
	printf("\nNhap gia tri can chen x = "); scanf("%d",&x);
	printf("\nNhap vi tri can chen k = "); scanf("%d",&k);
	for(i = n-1; i >=k; i--)
	{
		a[i+1] =a[i];
	}
	a[k] = x;
	printf("Mang sau khi chen la : \n");
	for(i = 0; i < n+1; i++)
	{
		printf("%d\t", a[i]);
	}
}

int main()
{
	int n; 
	int a[n];
	printf("Nhap do dai cua mang : "); scanf("%d",&n);
	inputArr(a,n);
	printf("Mang do la : \n");
	outputArr(a,n);
	tbc(a,n);
	chenXvaovtk(a,n);
	getch();
	return 0;
}
