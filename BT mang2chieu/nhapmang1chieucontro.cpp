#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void inputArray(int *a, int size)
{
	int i;
	for(i = 0 ; i < size; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",a+i);
	}
}

void outputArray(int *a, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%d\t",*(a+i));
	}
}

int main()
{
	int size, n, *a;
	printf("Nhap do dai cua mang : "); scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	inputArray(a,n);
	printf("Mang do la : \n");
	outputArray(a,n);
	free(a);
	getch();
	return 0;
}



