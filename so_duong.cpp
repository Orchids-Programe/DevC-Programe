#include<stdio.h>
#include<stdlib.h>

void input(int *a, int n)
{
	for(int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", (a+i));
	}
}

void output(int *a, int n)
{
	for(int i = 0; i< n; i++){
		printf("%d\t", *(a+i));
	}
}

void bai_2(int *a, int n)
{
	int i;
	int count1 = 0;
	for( i = 0; i< n; i++){
		if(a[i]>0)
		count1++;
	}
	if(count1==0)
	{
		printf("\ntrong day khong co so duong\n");
	}
	else{
		printf("\ntrong day co so duong\n");
	}
	
	int count = 0;
	for( i = 0; i< n; i++){
		if(a[i]>0)
		count++;
	}
	if(count==n)
	{
		printf("\ntat ca cac phan tu trong day duong\n");
	}
	else{
		printf("\ntrong day khong duong het\n");
	}
}

void bai_3(int *a, int n, int k)
{
	int i;
	int count = 0;
	for(int i = 0; i < n-1; i++)
	{
		if((a[i]>0) && (a[i+1]>0)){
		count++;
		}
		break;
	}
	if(count  +  1 ==  k) printf("\nco %d so duong dung canh nhau\n", k);
	else printf("\nkhong co  %d  so  duong dung canh nhau\n", k);
}

void bai_5(int *a, int n)
{
	int i;
	int m = 0;
	for(i = 0;i < n-1; i++){
		if(a[i]>a[i+1])
		{
		m = 1;
		}
	}
	if(m == 1) printf("\nday khong la day tang\n");
	else printf("\nday la day tang\n");
	
	int count=0;;
	for(int i = 0; i < n-1; i++){
		if(a[i]*a[i+1] > 0)
		{
			count++;
		}
	}
	if(count > 0) printf("\nkhong la day dan dau\n");
	else printf("\nla day dan dau\n");
}

void xoa_phan_tu(int *a, int *n)
{
	for(int i = 0; i < *n-1; i++){
		a[i] = a[i+1];
	}
	(*n)--;
}

void xoa_x(int *a, int  *n, int x)
{
	int i;
	for(i = 0; i < *n; i++){
		if(a[i]==x)
		{
			xoa_phan_tu(a,n);
			i--;
			n--;
		}
	}
	
}

void bai_7(int *a, int n)
{
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] < a[j]){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			}
		}
	}
	output(a, n);
}

void so_lon_thu_2(int *a, int n)
{
	int max=a[0];
 	for(int i=1;i<n;i++){
 		if(a[i]>max) 
		max=a[i];
 	}
 	
 	int max2=a[0];
 	for(int i=1;i<n;i++){
 		if(a[i]>max2 && a[i]<max)
			max2=a[i];
 	}
 	printf("\nmax 2 = %d\n", max2);
}
int main()
{
	int *a, n, k, x;
	printf("nhap kich thuoc day = ");
	scanf("%d", &n);
	a = (int*)malloc(n*sizeof(int));
	input(a,n);
	output(a,n);
	so_lon_thu_2(a,n);
	bai_2(a, n);
	printf("\nnhap so k = ");
	scanf("%d", &k);
	bai_3(a, n, k);
	bai_5(a,n);
	printf("\nday giam: ");
    bai_7(a, n);
    xoa_x(a, &n, x);
    printf("nhap phan tu can xoa = ");
	scanf("%d", &x);
	printf("\nMang sau khi xoa \n");
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
	free(a);
	return 0;
}
