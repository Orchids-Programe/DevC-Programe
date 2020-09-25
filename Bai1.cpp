#include<stdio.h>
#include<math.h>
#include<conio.h>

void xuat_hien_tai_vi_tri(int a[][100], int m1, int n1, int d)
{
	for(int i = 0;i<m1;i++){
		for(int j=0;j<n1;j++){
			if(a[i][j]==d)
			printf("\nphan tu %d xuat hien tai vi tri a[%d][%d]\n", d, i, j);
		}
	}
}

int dem_so_lan_xuat_hien(int a[][100], int m1, int n1, int d)
{
	int count = 0;
	for(int i = 0;i<m1;i++){
		for(int j=0;j<n1;j++){
			if(a[i][j]==d)
			count++;
		}
	}
	printf("\nphan tu %d xuat hien %d lan\n", d, count);
	return count;
}

void ma_tran_chuyen_vi(int a[][100], int m1, int n1)
{
	printf("\nma tran chuyen vi la\n");
	for(int j=0;j<n1;j++){
		for(int i = 0;i<m1;i++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int sap_xep(int a[][100], int m1, int n1,int *maxh)
{
	int sum = 0,maxhang=0;
	for(int j=0;j<n1;j++){
		int tg = 0;
		for(int i = 0;i<m1;i++){
			tg+=a[i][j];
			if(i == 0||sum<tg){
				sum=tg;
				maxhang=i;
			}
		}
	}
	printf("\nhang co tong lan nhat la %d voi sum = %d\n", maxhang, sum);
	*maxh=maxhang;
	return sum;
}
int main()
{
	int a[100][100];
	int b[100][100];
	int c[100][100];
	int e[100];
	int m1, n1, m2, n2, maxh = 0,sum;
	int i, j;
	
	printf("cow 1 = ");
	scanf("%d", &m1);
	printf("col 1 = ");
	scanf("%d", &n1);
	
	printf("cow 2 = ");
	scanf("%d", &m2);
	printf("col 2 = ");
	scanf("%d", &n2);
	printf("\nmang 2 chieu a");
	for(int i = 0;i<m1;i++){
		for(int j=0;j<n1;j++){
			printf("\na[%d][%d] ", i, j);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\nmang 2 chieu b");
	for(int i = 0;i<m2;i++){
		for(int j=0;j<n2;j++){
			printf("\nb[%d][%d] ", i, j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i = 0;i<m1;i++){
		for(int j=0;j<n1;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\ntong cua 2 ma tran\n");
	for(int i = 0;i<m1;i++){
		for(int j=0;j<n1;j++){
			printf("%d     ",c[i][j]);
	}
			printf("\n");
	}
	
	if(m1!=n2 || n1!=m2)
		printf("hai ma tran khong nhan duoc voi nhau\n");
		
	else{
		printf("\nTich cua hai ma tran la:\n");  
		for(int i=0;i<m1;i++){  
			for(int j=0;j<n1;j++){  
				c[i][j]=0;  
				for(int k=0;k<n1;k++){  
					c[i][j]+=a[i][k]*b[k][j];  
				}  
			}  
		} 
		for(int i=0;i<m1;i++){  
			for(int j=0;j<n1;j++){  
			printf("%d\t",c[i][j]);  
			}  
			printf("\n");  
		}
	}
	int tg;
	for(int i = 0;i<m1-1;i++){
		for(int h = i+1;h<m1;h++){
			if(e[i]>e[h]){
				tg = e[i];
				e[i]=e[j];
				e[j]=tg;
				for(int j = 0;j<n1;j++){
					tg = a[i][j];
					a[i][j]=a[h][j];
					a[h][j]=tg;
				}
			}
		}
	}
	printf("sap xem ma tran a theo thu tu tong hang\n ");
	for(int i=0;i<m1;i++){  
		for(int j=0;j<n1;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
	sap_xep(a, m1, n1, &maxh);
	ma_tran_chuyen_vi(a, m1, n1);
	int d;
	printf("\nnhap d = ");
	scanf("%d", &d);
	xuat_hien_tai_vi_tri(a,m1,n1,d);
	dem_so_lan_xuat_hien(a, m1, n1, d);
	
	return 0;
}
