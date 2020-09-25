#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int **input(int m, int n)
{
	int **a = (int **) malloc(m*sizeof(int*));
	for(int i = 0; i<m;i++){
		a[i] = (int*)malloc(n*sizeof(int));
		for(int j = 0; j< n; j++){
			printf("a[%d][%d]", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	return a;
}

void output(int **a, int m, int n)
{
	for(int i = 0; i< m; i++){
		for(int j = 0; j< n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int **a, m,  n;
	printf("nhap so hang = ");
	scanf("%d", &m);
	printf("nhap so cot");
	scanf("%d", &n);
	a = input(m,n);
	output(a,m,n);
	getch();
	return 0;
}
