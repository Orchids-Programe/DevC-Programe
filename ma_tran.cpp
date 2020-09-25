#include<stdio.h>
#include<stdlib.h>

int **input(int m, int n)
{
	int **a = (int**)malloc(m*sizeof(int*));
	for(int i = 0; i < m; i++){
		a[i] = (int*)malloc(n*sizeof(int));
		for(int j = 0; j < n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	return a;
}

void output(int **a, int m, int n)
{
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

//void tinh_thua_cua_ma_tran(int **a, int m, int n)
//{
//	int count = 0;
//	for(int i = 0; i < m; i++){
//		for(int j = 0; j < n; j++){
//			if(a[i][j]==0)
//			{
//				count++;
//			}
//		}
//	}
//	if(count > n/2) printf("\nma tran co tinh thua\n");
//	else printf("\nma tran khong co tinh thua\n");
//}
//
//void vi_tri_cac_phan_tu_dat_max(int **a, int m, int n)
//{
//	int i ,j, max = a[0][0], maxi = 0, maxj = 0;
//	for(i = 0; i < m; i++){
//		for(j = 0; j < n; j++){
//			if(max < a[i][j]){
//				max = a[i][j];
////				maxi = i;
////				maxj = j;
//			}
//		}
//	}
//
//	printf("\nvi tri cac phan tu dat max la:\n");
//		for(i = 0; i < m; i++){
//		for(j = 0; j < n; j++){
//			if(max == a[i][j]){
//				printf("a[%d][%d]\t",i,j);
////				maxi = i;
////				maxj = j;
//			}
//		}
//	}
//}
//
//void bai_3(int **a, int m, int n)
//{
//	int count=0, i, j;
//	for(i = 0; i < m; i++){
//		for(j = 0; j < n; j++){
//			if(a[i][j]>0)
//			{
//				count++;
//			}
//		}
//	}
//	if(count > 0) printf("\ntrong ma tran co so duong\n");
//	else printf("\ntrong ma tran khong co so duong\n");
//	
//	int count1=0;
//	for(i = 0; i < m; i++){
//		for(j = 0; j < n; j++){
//			if(a[i][j]<0)
//			{
//				count1++;
//			}
//		}
//	}
//	if(count1 > 0) printf("\ntrong ma tran khong duong het\n");
//	else printf("\ntat ca cac so trong ma tran deu duong\n ");
//	
//}
//
//void Sum_tren_bien(int **a, int m, int n)
//{
//	int sum = 0, i, j;
//	for(i = 0; i < m; i ++)
//	{
//		sum += a[i][0];
//		sum += a[i][n-1];
//	}
//	for(j = 0; j < n; j++)
//	{
//		sum += a[0][j];
//		sum += a[n-1][j];
//	}
//	sum = sum -a[0][0] - a[m-1][0] - a[0][n-1] - a[m-1][n-1];
//	printf("\ntong cac phan tu tren bien = %d\n", sum);
//}
//
//void ma_tran_doi_xung(int **a, int m, int n)
//{
//	int count = 0;
//	for(int i = 0; i < m ; i++){
//		for(int j = 0; j < n; j++){
//			if(a[i][j] != a[j][i])
//			{
//				count++;
//			}
//		}
//	}
//	if(count > 0) printf("\nma tran khong doi xung\n");
//	else printf("\nma tran doi xung\n");
//}
//void bai_4(int **a, int m, int n)
//{
//	int count = 0, i, j;
//	for(i = 0; i < m; i++){
//		for(j = 0; j < n; j++){
//			if(a[0][j]==a[n-1][j])
//			{
//				count++;
//			}
//		}
//	}
//	if(count > 0) printf("\ntrong ma tran co 2 hang giong nhau\n");
//	else  printf("\ntrong ma tran khong co 2 hang giong nhau\n");
//}
//
//void tong_duong_cheo_chinh(int **a, int m, int n)
//{
//	int sum  =0;
//	int i, j;
//	for(i = 0; i < n; i++){
//		sum +=a[i][i];
//	}
//	printf("\ntong cac phan tu tren duong cheo chinh = %d", sum);
//}

void kiem_tra_co_hang_nao_toan_0(int **a,int *b, int m, int n)
{
	int count = 0;
	b = (int*)malloc(m*sizeof(int));
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j]!=0)
			{
				count++;
			}
		}
		b[i] = count;
		count = 0;
		
	}
	for(int i = 0;i < m;i++){
		if(b[i]==0){
			for(int j = 0; j < n; j++){
			int temp = a[i][j];
			a[i][j]= a[m-1][j];
			a[m-1][j] = temp;
		}
		printf("\n");
		output(a, m, n);
		m--;
		}
		
	}
	printf("\n");
	output(a, m, n);
	free(b);
}
int main()
{
	int **a,*b, m, n;
	printf("nhap so dong: ");
	scanf("%d", &m);
	printf("nhap so cot: ");
	scanf("%d", &n);
	a = input(m, n);
	output(a, m, n);
//	tinh_thua_cua_ma_tran(a, m, n);
//	vi_tri_cac_phan_tu_dat_max(a, m, n);
//	bai_3(a, m, n);
//	bai_4(a, m, n);
//	Sum_tren_bien(a, m, n);
//	ma_tran_doi_xung(a, m, n);
//	tong_duong_cheo_chinh(a, m, n);
	kiem_tra_co_hang_nao_toan_0(a,b, m, n);
	return 0;
}
