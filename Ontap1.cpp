#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void inputArr(int *a, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",(a+i));
	}
}
void outputArr(int *a, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d\t",*(a+i));
	}
}
void daycosoduong(int *a, int n)
{
	int i;
	int count = 0;
	for(i = 0; i < n; i++)
	{
		if(*(a+i) > 0)
		{
			count++;
		}
	}
	if(count == 0)
	{
		printf("\nTrong day khong co so duong!");
	}
	else
	{
		printf("\nTrong day co so duong!");
	}
	
	if(count == n)
	{
		printf("\nTat ca cac phan tu cua day deu duong!");
	}
	else
	{
		printf("\nKhong phai tat ca deu duong!");
	}
}



int main()
{
	int *a,n;
	printf("Nhap do dai mang : "); scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	inputArr(a,n);
	printf("Mang do la : \n");
	outputArr(a,n);
	daycosoduong(a,n);
	free(a);
	getch();
	return 0;
}


