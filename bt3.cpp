#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

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
void tbcsolevtchan(int *a, int n)
{
	int i;
	int count = 0;
	int sum = 0;
	for(i = 0; i < n; i = i + 2)
	{
		if(*(a+i) % 2 == 1)
		{
			count++;
			sum = sum + *(a+i);
		}
	}
	printf("\nTrung binh cong cua cac so le o vi tri chan la : %.2f",(float)sum/count);
}

void findmax(int *a, int n)
{
	int i, max;
	max = *(a+0);
	for(i = 0; i < n; i++)
	{
		if(*(a+i) > max)
		{
			max = *(a+i);
		}
	}
	printf("\nPhan tu lon nhat la : %d",max);
}
void vitrimin(int *a, int n)
{
	int i, min = *(a+0);
	for(i = 0; i < n; i++)
	{
		if(*(a+i) < min)
		{
			min = *(a+i);
		}
	}
	printf("\nVi tri ma gia tri phan tu nho nhat la : ");
	for(i = 0; i < n; i++)
	{
		if(*(a+i) == min)
		{
			printf("%d", (i+1));
		}
	}
}

int isPalindrome(int n)
{
	int x = sqrt(n);
	if(x * x == n)
	{
		return 1;		
	}
	else
	{
		return 0;
	}
}

void demPalindrome(int *a, int n)
{
	int count = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(isPalindrome(*(a+i)) == 1)
		{
			count++;
		}
	}
	printf("\nTrong mang co %d so chinh phuong",count);
}

int main()
{
	int *a, n;
	printf("Nhap do dai cua mang : "); scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	inputArr(a,n);
	printf("\nMang do la : \n");
	outputArr(a,n);
	tbcsolevtchan(a,n);
	findmax(a,n);
	vitrimin(a,n);
	demPalindrome(a,n);
	free(a);
	getch();
	return 0;
}
