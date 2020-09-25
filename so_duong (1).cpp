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

void k1(int *a, int n, int k)
{
	int b[100], count = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]>0 &&a[i+1]>0){
			b[i] = count;
			count++;
		}
	}
	printf("\ncac gia tri cua count\n");
	for(int i = 0; i < n; i++)
	{
		if(b[i] + 1 == k){
			printf("trong mang co %d so duong dung canh nhau", k);
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
	input(a,n);
	output(a,n);
	int k;
	printf("nhap k = ");
	scanf("%d", &k);
	k1(a,n,k);
	free(a);
	getch();
	return 0;
}



