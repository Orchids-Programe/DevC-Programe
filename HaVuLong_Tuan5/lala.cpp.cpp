#include<stdio.h>
#include<math.h>

void inputArr(int a[],int n);
void findX(int a[],int n,int x);
void sortArr(int a[],int n);
void maxArr(int a[],int n);
int isPrime(int n);
void nPrimes(int a[],int n);
float sumPositive(int a[],int n);
int symmetryArr(int a[],int n);


int main(){
	int n,x;
	int a[n];
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	inputArr(a,n);
	printf("Nhap X:");
	scanf("%d",&x);
	findX(a,n,x);
	maxArr(a,n);
	nPrimes(a,n);
	sortArr(a,n);
	printf("Trung binh cong cac phan tu duong cua mang la:%f\n",sumPositive(a,n));
	if(symmetryArr(a,n)==1){
		printf("Cac phan tu trong mang doi xung");
	}
	else
	printf("Cac phan tu trong mang khong doi xung nhau");
	return 0;
}
	
	
void inputArr(int a[],int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}
}
void findX(int a[],int n,int x){
	int i,count=0;
	

	for(i=0;i<n;i++){
		if(a[i]== x){
			count ++;	
		}
	}
	if(count ==0 ){
		printf("So %d khong xuat hien trong mang\n",x);
	}
	else{
		printf("So %d xuat hien %d lan trong mang\n",x,count);
		for(i=0;i<n;i++){
			if(a[i]==0){
				printf("a[%d]",i);
			}
		}
	}
	
	
}
void sortArr(int a[],int n){
	int i,j,temp =0;
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(a[i]>a[j]){
				temp=a[j];
				a[j]= a[i];
				a[i]=temp;
			}
		}
	}
	printf("Day da sap xep tang dan la:\n");
	for(i=0;i<n;i++){
		printf("a[%d]:%d\n",i,a[i]);
	}
}
void maxArr(int a[],int n){
	int i,max= a[0];
	for(i=1;i< n;i++){
		if(max<a[i]){
		max= a[i];
			}

	}
		printf("Phan tu lon nhat cua mang la:%d\n",max);

}
int isPrime(int n){
	int i;
	
	if(n<2){
		return 0;
	}
	else 
	{
		for(i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
	}
}

void nPrimes(int a[],int n){
	int i,count=0;
	
	for(i=0;i<n;i++){
		if(isPrime(a[i])==1){
			count ++;
		}
	}
	if(count == 0){
		printf("Khong co phan tu nao la so nguyen to trong mang\n");
	}
	else{
		printf("Co %d phan tu trong mang la so nguyen to:\n",count);
		for(i=0;i<n;i++){
			if(isPrime(a[i])==1){
				printf("%d\n",a[i]);
			}
		}
	}
}
float sumPositive(int a[],int n){
	int i,count=0;
	float sum=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			sum += a[i];
			count++;
		}
	}

	return (float)sum /count;
}
int symmetryArr(int a[],int n){
	int i;
	for(i=0;i< n/2;i++){
		if(a[i] != a[n-i-1]){
			return 0;
			break;
		}
		
	}
	return 1;
}



