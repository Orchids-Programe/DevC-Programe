#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
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

void xoa_1_phan_tu(int a[], int &n, int vt)
{
	for(int i = vt; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
	output(a,n);
}

void xoa_cac_phan_tu_trung_nhau(int a[], int &n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				xoa_1_phan_tu(a, n, j);
				j--;
			}
		}
	}
}
int main()
{
	int n;
	int *a;
	printf("nhap so phan Tu: ");
	a= (int*)malloc(n*sizeof(int));
	scanf("%d", &n);
	int vt;
	input(a, n);
	output(a, n);
	xoa_cac_phan_tu_trung_nhau(a, n);
	printf("\nMang sau khi xoa tat cac cac gia tri trung nhau: ");
	output(a, n);
	free(a);
	getch();
	return 0;
}



