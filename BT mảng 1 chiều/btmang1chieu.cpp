#include<stdio.h>
#include<conio.h>
#include<math.h>


void inputArray(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
}

void outputArray(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d\t",a[i]);
	}
}

void avg_sole_vtchan(int a[],int n)
{
	int i;
	int count = 0; int sum = 0;
	for(i = 0; i < n; i++)
	{
		
		if(i % 2 == 0 && a[i] % 2 != 0)
		{
			count++;
			sum += a[i];
		}
	}
	printf("\nTrung binh cong cua cac so le o vi tri chan la : %.2f",(float)sum/count);
}

void findMax(int a[], int n)
{
	int i;
	int max = a[0];
	for(i = 0; i < n ; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	printf("\nPhan tu lon nhat trong day la : %d", max);
}

void findvitriMin(int a[], int n)
{
	int i;
	int min = a[0];
	for( i = 0; i < n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] == min)
		{
			printf("\nVi tri cua phan tu nho nhat la : %d",i);
		}
	}
}

int Palindrome(int n)
{
	int i;
	int x = sqrt(n);
	if(x*x == n)
	{
		return 1;
	}
	else 	
		return 0;
}

int demPalindrome(int a[], int n)
{
	int i;
	int count = 0;
	for(i = 0; i < n; i++)
	{
		if(Palindrome(a[i]) == 1)
		{
			count++;
		}
	}
	printf("\nTrong day co %d so chinh phuong!", count);
}

int isPrime(int n)
{
	if(n < 2)
		return 0;
	for(int i = 2; i < sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

void printPrime(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(isPrime(a[i]) == 1)
		{
			printf("%d\t",a[i]);
		}
	}
}

//thay the cacphan tu am bang 0
void thaythe(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			a[i] = 0;
		}
	}
	printf("\nMang sau khi thay the la : ");
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}

//xoa bo cac phan tu am trong mang
void xoaam(int a[], int n)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			for(j = i; j < n-1; j++)
			{
				a[j] = a[j+1];
			}
			n= n-1;
		}
	}
	printf("\nMang sau khi da xoa phan tu am la : ");
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}

void sort(int a[], int n)
{
	int temp;
	int i,j;
	for(i = 0; i < n-1; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nMang sau khi da sap xep tang dan la : ");
	for(i = 0; i < n; i++)
	{
		printf("%d\t",a[i]);
	}
}

//tong binh phuong cac so le
void binhpuongle(int a[], int n)
{
	int i, sum = 0;
	for(i = 0 ;i < n; i++)
	{
		if(i % 2 != 0)
		{
			sum = sum + i*i;
		}
	}
	printf("\nTong binh phuong cac so le la : %d", sum);
}



int main()
{
	int i,n;
	int a[n];
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	inputArray(a,n);
	printf("Mang do la : \n");
	outputArray(a,n);
	avg_sole_vtchan(a,n);
	findMax(a,n);
	findvitriMin(a,n);
	demPalindrome(a,n);
	printf("\nCac so nguyen to co trong day la : ");
	printPrime(a,n);
	thaythe(a,n);
	xoaam(a,n);
	sort(a,n);
	binhpuongle(a,n);
	printPrime(a,n);
	getch();
	return 0;
	
}
