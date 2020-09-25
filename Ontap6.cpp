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

void sapxep(int *a, int n)
{
	int i,j;
	int temp;
	for(i = 0; i < n; i++)
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
	for(i = 0; i < n; i++)
	{
		printf("%d\t",*(a+i));
	}
	printf("\nPhan tu lon thu 2 la : %d",*(a+1));
}

int main()
{
	int *a,i,n;
	printf("Nhap do dai mang : "); scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	inputArray(a,n);
	printf("\nMang do la : \n");
	outputArray(a,n);
	sapxep(a,n);
	free(a);
	getch();
	return 0;
	
}
