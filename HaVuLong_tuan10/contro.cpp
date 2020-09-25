#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


void input(int *a, int size)
{
	int i;
	for(i = 0 ; i < size; i++)
	{
		printf("\na[%d] = ",i);
		scanf("%d",(a+i));
	}
}

void output(int *a, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("\t%d",*(a+i));
	}
}



void sort(int *a, int size)
{
	int temp;
	int i,j;
	printf("\nXau sau khi sap xep la : ");
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(*(a+i) > *(a+j))
			{
				temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
			}
		}
		printf("%d\t",*(a+i));
	}
}


int kiem_tra(int *a, int size, int x)
{
	printf("\nnhap x = ");
	scanf("%d", &x);
	int i, vt,k=0;
	for(int i = 0;i<size;i++){
		if(*(a+i)==x){
			k=1;
			printf("phan tu x= %d co xuat hien trong day", x);
			break;	
		}
	}
	if(k==0)
	{
		printf("phan tu x= %d khong xuat hien trong day", x);
		if(vt>=0 && vt<=size)
		{
			for(int i=size; i>vt; i--)
			{
				*(a+i)=*(a+i-1);
				*(a+vt)=x;
				size++;
			}
			
		}
			
	}
}

void them_phan_tu(int *a, int &size, int x, int vt)
{
	if(vt >= 0 && vt <= size)
	{
		for(int i = size; i > vt; i--)
		{
			a[i] = a[i-1]; 
		}	
		a[vt] = x;
		size++;
	}
	else
	{
		printf("\nVi tri %d khong hop le", vt);
	}
}

void xoa1phantu(int *a, int *size, int vt)
{
	int i;
	for(i = vt; i < *size-1;i++)
	{
		a[i] = a[i+1];
	}
	(*size)--;
}

void xoaX(int *a, int *size, int x)
{
	int i;
	for(i = 0; i < *size; i++)
	{
		if(x == a[i])
		{
			xoa1phantu(a,size,i);
			i--;
		}
	}
}

void doixung(int *a, int size)
{
	int m = 0;
	for(int i = 0; i < size ; i++)
	{
		if(*(a+i) != *(a+i+size-1))  // a[i]=a[size-i-i]
		{
			m = 1;
			printf("\nmang khong doi xung!");
			break;
		}
	}
	
	if(m == 0)
		printf("\nMang doi xung!");
}


int main()
{
	int *a, size,x,vt,n;
	printf("Nhap kich thuoc : "); scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	input(a,n);
	output(a,n);
	sort(a,n);
	kiem_tra(a,size,x);
	doixung(a,size);
	printf("\nNhap gia tri can xoa trong mang:  ");
    scanf("%d",&x);
	xoaX(a,&size,x);
	printf("\nMang sau khi xoa ");
    for(int i=0;i<size;i++)
    {
    	printf("\n %d",a[i]);
	}	
    them_phan_tu(a,size,x,vt);
	free(a);
	getch();
	return 0;
}

// void Sapxep(sinhvien sv[20], int n)
//{
//sinhvien tam;
//for(int i=1; i<=n; i++)
//for(int j=i+1; j<=n; j++)
//if(strcmp(sv[i].Ten,sv[j].Ten)>0 || strcmp(sv[i].Ho,sv[j].Ho)>0)
//{
//tam = sv[i];
//sv[i] = sv[j];
//sv[j]=tam;
//}
//}

