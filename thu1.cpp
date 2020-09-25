#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void inputArray(int *a, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",(a+i));	
	}	
}
void outputArray(int *a, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d\t",*(a+i));
	}
}
void daygiam(int *a, int n)
{
	int i,j,temp;
	for(i =0; i < n-1; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(*(a+i) < *(a+j))
			{	
				temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
			}
		}
	}
	printf("\nDay sau khi da sap xep la : \n");
	outputArray(a,n);
}

void kiemtra(int *a, int n)
{
	int i,x, kt = 0;
	printf("\nNhap gia tri can kiem tra : "); scanf("%d", &x);
	for(i = 0; i < n; i++)
	{
		if(*(a+i) == x)
		{
			kt =1;
		}
	}
	if(kt == 1)
	{
		printf("\nPhan tu %d co xuat hien trong day!",x);
	}
	else
	{
		printf("\nPhan tu %d khong xuat hien trong day!",x);
		printf("\nNhap gia tri can chen : "); scanf("%d",&x);
		int i = 0, vt = 0;
		i = vt;
		for(i = n-1; i >= vt; i--)
		{
			a[i+1] = a[i];
		}
		a[vt] = x;
		printf("\nDay sau khi chen la : \n");
		for(i = 0; i < n+1; i++)
		{
			printf("%d\t",*(a+i));
		}
	}
}

int main()
{
	int *a,n;
	printf("Nhap do dai mang : "); scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	inputArray(a,n);
	printf("\nMang do la : \n");
	outputArray(a,n);
	daygiam(a,n);
	kiemtra(a,n);
	
	free(a);
	getch();
	return 0;
}
