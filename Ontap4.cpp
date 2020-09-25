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

void loaibophantutrung(int *a, int n)
{
	int i,j,k;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			if(a[i] == a[j])
			{
				for(k = i; k < n; k++)
				{
					a[k] = a[k + 1];
					n--;
					i--;
				}
			}
		}
	}
	printf("\nMang sau khi xoa la : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d\t",a[i]);
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
	loaibophantutrung(a,n);
	free(a);
	getch();
	return 0;
	
}
