#include<stdio.h>

void nhapmang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Nhap a[%d] = ",i);
		scanf("%d", a[i]);
	}
}

void xuatMang(int a[], int n)
{
	int i;
	for(i = 0; i < n ; i++)
	{
		printf("%d \t", a[i]);
	}
}

void xuathien(int a[], int n)
{
	int x; //gia tri can kiem tra trong mang
	for(int i = 0; i < n; i++)
	{
		if(x == a[i])
		{
			printf("%d co xuat hien trong mang!", x);
		}
	}
}

void solanvitri(int a[], int n)
{
	int count = 0,x;
	for(int i = 0; i < n; i++)
	{
		if(x == a[i])
		{
			printf("%d o vi tri thu %d\n",x, i);
			count++;
		}
	}
	printf("So lan xuat hien cua %d la : %d",x,count);
}

void maxNum(int n)
{
	int maxNum = a[0];
    for(int i = 0;i < n;i++){
        if(a[i] > maxNum) 
		maxNum = a[i];
    }
    printf("\nPhan tu lon nhat: %d", maxNum);
    
}

int main()
{
	int n;
	int a[n];
    printf("\nNhap so luong phan tu n = ");
    scanf("%d", &n);
    
    
	nhapmang(a,n);
	xuatMang(a,n);
	xuathien(a,n);
	solanvitri(a,n);
	return 0;
	
}
