#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void inputArray(int *a, int n)
{
	int i; 
	for(i = 0 ; i < n; i++)
	{
		printf("a[%d] = ", i);
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

void tonglonnhat(int *a, int n)
{
	int i,j,temp;
	for(i = 0 ; i < n-1; i++)
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
	printf("\nDay sau khi sap xep la : \n");
	outputArray(a,n);
	int sum;
	sum = *(a+0)+*(a+1)+*(a+2);
	printf("\nTong cua 3 phan tu lon nhat la : %d",sum);
}

void phantuamlonnhat(int *a, int n)
{
	int i,j,max;
	for(i = 0; i < n; i++)
	{
		if(*(a+i) < 0)
		{
			max = *(a+i);
			for(j = 0; j < n; j++)
			{
				if(*(a+j) > max && *(a+j) < 0)
				{
					max = *(a+j);
				}
			}
		}
	}
	printf("\nPhan tu am lon nhat la : %d",max);
}

void tongbang2sotrongday(int *a, int n)
{
	int i,j,k;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-1; j++)
		{
			for(k = j+1; k < n; k++)
			{
				if(a[i] > a[j] && a[i] > a[k] && a[i] == a[j] + a[k])
				{
					printf("\n%d = %d + %d",a[i],a[j],a[k]);
				}
			}
		}
	}
}

int main()
{
	int *a,i,n;
	printf("Nhap do dai mang : "); scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	inputArray(a,n);
	printf("\nMang do la : \n");
	outputArray(a,n);
	tonglonnhat(a,n);
	phantuamlonnhat(a,n);
	tongbang2sotrongday(a,n);
	free(a);
	getch();
	return 0;
	
}
