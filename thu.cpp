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
void daysoduong(int *a, int n)
{
	int i, kt = 0;
	for(i = 0; i < n; i++)
	{
		if(*(a+i) > 0)
		{
			kt = 1;
		}
	}
	if(kt == 1)
	{
		printf("\nDay da cho co so duong!");
	}
	else
	{
		printf("\nDay da cho khong co so duong!");
	}
}

void tatcaphantuduong(int *a, int n)
{
	int i;
	int count=0;
	for(i = 0; i < n; i++)
	{
		if(*(a+i) > 0)
		{
			count++;
		}
	}
	if(count == n)
	{
		printf("\nTat ca cac phan tu trong day deu la so duong!");
	}
	else
	{
		printf("\nKhong phai la day toan duong!");
	}
}
void daytang(int *a, int n)
{
	int i, count=0;
	for(i = 0; i < n; i++)
	{
		if(a[i] < a[i+1])
		{
			count++;
		}
	}
	if(count == (n-1))
	{
		printf("\nDay da cho la day tang!");
	}
	else
	{
		printf("\nDay da cho khong la day tang!");
	}
}

void daydandau(int *a, int n)
{
	int i, count = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i]*a[i+1] < 0)
		{
			count++;
		}
	}
	if(count == 0)
	{
		printf("\nDay da cho khong la day dan dau!");
	}
	else
	{
		printf("\nDay da cho la day dan dau!");
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
	daysoduong(a,n);
	tatcaphantuduong(a,n);
	daytang(a,n);
	daydandau(a,n);
	free(a);
	getch();
	return 0;
}
