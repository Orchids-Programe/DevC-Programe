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

void maxNum(int n)
{
	int maxNum;
	int a[n];
	maxNum = a[0];
	for(int i =1; i < n; i++)
	{
		if(a[i] > maxNum)
			maxNum = a[i];
	}
	printf("\nPhan tu lon nhat: %d", maxNum);
}

void local(int )
{
	printf("\nVi tri co gia tri lon nhat la: ");
    for(int i = 0;i < n;++i){
        if(arr[i] == maxNum) 
		printf("%d ", i+1);
    }
}

int trungbinhcong()
{
	int sum = 0;
    int count = 0;
    for(int i = 1; i < n; i+=2){
        if(a[i] > 0){
            count++;
            sum += a[i];
        }
    }
    printf("\nTrung binh cong = %f", (float)sum/count);
}

void printPrimeNum(int n)
{
	printf("\nCac so nguyen to co trong mang la: ");
    bool snt;
    for(int i = 0;i < n;i++){
        snt = true;
        for(int j = 2;j < a[i];j++)
		{
            if(a[i] % j == 0) snt = false;
        }
        if(a[i] >= 2 && snt == true) 
			printf("%d ", arr[i]);
    }
}

void sapxeptangdan()
{
	 int tg;
    for(int i = 0;i < n-1;++i){
        for(int j = i+1; j < n;++j){
            if(arr[i] > arr[j]){
                // Hoan vi
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;
            }
        }
    }
    // Muon xem thay doi thi bo comment
    printf("\nMang sau khi sap xep tang dan la: ");
    for(int i = 0;i < n;++i){
        printf("%d ", arr[i]);
}

int main()
{
	int n;
	int a[n];
	printf("\nNhap so luong phan tu n = ");
    scanf("%d", &n);
    
    nhapmang(a,n);
    xuatMang(a,n);
    maxNum(n);
    
    return 0;
}





