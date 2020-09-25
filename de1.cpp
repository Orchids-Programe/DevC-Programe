#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int **a,m,n;

void inputArr();
void outputArr();
bool isLikePrime(int t);
void likePrimes();
void maxInt();
void maxRowInt(int *b);
void roundArr();
void hoan_vi_2(int dong1,int  dong2);
int main(){
	int i,*b;
	printf("Nhap kich thuoc ma tran:\n");
	scanf("%d%d",&m,&n);
	a = (int**)malloc(m * sizeof(int*));
	for(i = 0;i < m; i++){
		a[i] = (int*)malloc(n * sizeof(int));
	}
	inputArr();
	printf("Ma tran vua nhap la:\n");
	outputArr();
	likePrimes();
	maxInt();
	b = (int*)malloc(n* sizeof(int));
	maxRowInt(b);
	printf("\nMa tran sau khi hoan doi la:\n");
	roundArr();
	int dong1, dong2;
	printf("nhap so dong can hoan vi");
	scanf("%d%d", &dong1, &dong2);
	
	hoan_vi_2(dong1, dong2);
	free(a);
	return 0;
}

void inputArr(){
	int i,j;
	
	for(i = 0;i < m;i++){
		for(j = 0; j < n;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void outputArr(){
	int i,j;
	
	for(i = 0;i < m;i++){
		for(j = 0; j < n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

bool isLikePrime(int t){
	int i,count = 0;
	int c =(ceil)(sqrt(t));
	if(t < 2)
	return false;
	for(i = 2; i<= c ;i++){
		if((t % i) == 0){
			count++;
		}
	}
	if(count == 1){
		return true;
	}
}

void likePrimes(){
	int i,j,c = 0;
		for(i = 0;i < m;i++){
		for(j = 0; j < n;j++){
			if(isLikePrime(a[i][j]) == true){
				c++;
			}
		}
	}
	if(c == 0){
		printf("khong co so gan nguyen to trong ma tran\n");
	}
	else
	{
		printf("Co %d cac so la so gan nguyen to trong ma tran\n",c);
		printf("Cac so do la:\n");
		for(i = 0;i < m;i++){
			for(j = 0; j < n;j++){
				if(isLikePrime(a[i][j]) == true){
					printf("%d\t",a[i][j]);
				}
			}
		}
	}
}

void maxInt(){
	int i,j,max = a[0][0];
	for(i = 0;i < m;i++){
		for(j = 0; j < n;j++){
			if(max < a[i][j]){
				max = a[i][j];
			}
		}
	}
	if(max > 0 && (max % 2) == 0){
		printf("\nSo lon nhat nguyen duong chan trong ma tran la: %d\n",max);
	}
	else
	{
		printf("\nKhong co so lon nhat nguyen duong chan trong ma tran \n");
	}
}

void maxRowInt(int *b){
	int i,j,max = 0, count = 0;

	for(i = 0;i < m;i++){
		for(j = 0; j < n;j++){
			if(a[i][j] > 0 && (a[i][j] % 2) != 0){
				count++;
			}
		}
	b[i]=count;
	}
	for(i = 0;i < m ; i++){
		if(max < b[i]){
			max = b[i];
		}
	}
	for(i = 0;i < m ;i++){
		if(max == b[i]){
			printf(" Hang co tong so nguyen duong le lon nhat la :%d",i);
		}
	}
}

void roundArr(){
	int i,j,t;
	for(i = 0;i < m;i++){
		for(j = 0; j < n;j++){
			t= a[i][j];
			a[i][j]= a[m-1][j];
			a[m-1][j]=t;
		}
		break;
	}
	outputArr();
}

void hoan_vi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	
}

void hoan_vi_2( int dong1, int dong2)
{
	
	if((dong1>=0 && dong1< m) && (dong2>=0)&&dong2<m)
	{
		for(int j = 0; j < n; j++){
			hoan_vi(a[dong1][j], a[dong2][j]);
		}
		outputArr();
	}
}



