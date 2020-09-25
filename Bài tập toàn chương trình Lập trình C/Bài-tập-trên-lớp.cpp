Viết chương trình thực hiện các yêu cầu sau:
//1. Tính khoảng cách hai điểm trên mặt phẳng

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float x1, y1, x2, y2, dx, dy, D;
	printf("Nhap toa do diem A: ");
	scanf("%f%f", &x1, &y1);
	printf("\n Nhap toa do diem B: ");
	scanf("%f%f", &x2, &y2);
	
	dx= x2 - x1;
	dy= y2 - y1;
	
	D = sqrt(dx*dx + dy*dy);
	printf("\n Khoang cach la giua 2 diem A va B la : %.2f ", D);
	getch();
}

// 2. Tính diện tích hình chữ nhật khi biết hai cạnh

#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, S;
	printf("Chieu dai a = ");
	scanf("%f", &a);
	printf("Chieu rong b = ");
	scanf("%f", &b);
	S = a*b;
	printf("Dien tich hinh chu nhat = %.2f", S);
	getch();
}


// 3. Tính diện tích tam giác khi biết 3 cạnh (công thức Heron)

#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	float a,b, c;
	printf("nhap gia tri canh a : ");
	scanf("%f",&a);
	printf("nhap gia tri canh b : ");
	scanf("%f",&b);
	printf("nhap gia tri canh c : ");
	scanf("%f",&c);
	
	if (a >= b + c || b >= a + c || c >= a + b)
        printf("Ba canh vua nhap khong phai la canh cua tam giac!");
    else {
         printf("Ba canh vua nhap la 3 canh cua tam giac!");
        
        float p=(a+b+c)/2;
	
		float S=sqrt(p*(p-a)*(p-b)*(p-c));
		
		printf("\nDien tich tam giac : S=%.2f \n", S);
		getch();
    }
}


// 4. Nhập một số nguyên có hai ba số, in ra chữ số hàng trăm, chục, đơn vị
// Ví dụ: Nhập số n =453
// Kết quả in ra: Hàng trăm = 4
// Hàng chục = 5
// Hàng đơn vị = 3

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int N, n, a, b, c;
	printf("Nhap mot so co 3 chu so: \n");
	scanf("%d", &N);
	a = N/100;
	printf("Chu so hang tram la : %d \n", a);
	n = N%100;
	b = n/10;
	printf("Chu so hang chuc la : %d \n", b);
	c = n%10;
	printf("Chu so hang don vi la : %d \n", c);
	
	getch();
	return 0;
}

// 5. Nhập hai số thực a, x. Tính giá trị a^x
// a^x = a^(ln(a^x)) = e^(x.lna) = exp(x*ln(a))

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a, x;
	float X;
	printf("Nhap so a : \n");
	scanf("%d", &a);
	printf("Nhap so x : \n");
	scanf("%d", &x);
	X = exp(x*log(a));
	printf("Gia tri cua a^x = %.2f", X);
	getch();
	return 0;
	
}


1. Kiểm tra một số có là chính phương không?
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n, a;
	printf("Nhap so n : ");
	scanf("%d", &n);
	a = sqrt(n);
	
	if(a*a == n)
		printf("%d la so chinh phuong!",n);
	else
		printf("%d khong la so chinh phuong!",n);
	
	getch();
	return 0;
}

2. Nhập giá trị n, in bảng cửu chương n.
3. Tìm ước số chung lớn nhất của hai số a và b.
#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;
	printf("Nhap so a : ");
	scanf("%d", &a);
	printf("Nhap so b : ");
	scanf("%d", &b);
	
	if(a == 0 || b == 0)
		return a + b;
	
	while(a != b)
	{
		if(a>b)
			a = a - b;
		else
			b = b - a;
	}
	
	printf("UCLN la : %d", a);
	getch();
	return 0;
	
}
4. Nhập giá trị tháng, năm. In ra số ngày có trong tháng đó.
#include<stdio.h>
#include<conio.h>

int main()
{
	int ngay_cua_thang, thang, nam;
	printf("Nhap thang : ");
	scanf("%d", &thang);
	printf("Nhap nam : ");
	scanf("%d", &nam);
	
	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			ngay_cua_thang = 31;
		break;
		
		case 4: case 6: case 9: case 11:
			ngay_cua_thang = 30;
		break;
		
		case 2:
			if(nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
				ngay_cua_thang = 28;
			else
				ngay_cua_thang = 29;
	}
	
	printf("Ngay cua thang la : %d", ngay_cua_thang);
	getch();
	return 0;
}
5. Nhập số nguyên n. Tính tổng S = 1 + 1/2 + ... + 1/n
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n;
	float S = 0;
	printf("Nhap so n : ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
		S = S + 1/(float)i;
	
	printf("Gia tri S = %.2f", S);
	getch();
	
}
6. Nhập số thực a. Tìm số nguyên n nhỏ nhất để tổng S = 1 + 1/2 + ... + 1/n có
giá trị lớn hơn a.
#include<stdio.h>
#include<conio.h>

int main()
{
	int n = 0;
	double S = 0, a;
	printf("Nhap so a : ");
	scanf("%lf", &a);
	
	while(S <= a)
	{
		n++;
		S = S + 1.0/n;
	}
	
	printf("Gia tri n : %d",n);
	getch();
	return 0;
}
7. Tính giá trị n! , n!!
//n! 
#include<stdio.h>
#include<conio.h>

int main()
{
	int i, n, gt = 1;
	printf("Nhap so n : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
		gt = gt*i;
	
	printf("Ket qua la : %d",gt);
	getch();
}


//n!!
#include<stdio.h>
#include<conio.h>

int main()
{
	int n, x;
	double gt = 1;
	printf("Nhap gia tri cua n : ");
	scanf("%d", &n);
	
	x = n % 2;
	for(int i = 1; i <= n; i++)
	{
		if(x == 0 && i % 2 ==0)
		{
			gt = gt * i;
		}
		else{
			if(x == 1 && i % 2 == 1)
				gt = gt * i;
		}
	}	
	
	printf("n!! = %.2lf", gt);
	getch();
	return 0;
}

8. Tính giá trị sin (x) bằng công thức xấp xỉ Taylor
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n = 1;
	double k, x, kq = 0, gt = 1;
	printf("Nhap gia tri cua x : ");
	scanf("%lf", &x);
	
	while(fabs(k/gt))
	{
		n = n + 2;
		gt = gt*n*(n-1);
		k = k*k*(-k);
		kq = kq + k/gt;
	}
	
	printf("sin(%.2lf) = %.2lf",x, sin(x));
	getch();
	return 0;
}
9. Giải phương trình y=f(x) trong đoạn [a,b] với độ chính xác epsilon cho trước
bằng phương pháp chia đôi liên tiếp với giả thiết f(x) liên tục trong đoạn [a,b]
và có giá trị trái dấu tại hai đầu mút.

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x)
{
	return x*x -2*x;
}
int main()
{
	float a, b, c;
	printf("\n Nhap a ="); scanf("%f",&a);
	printf("\n Nhap b ="); scanf("%f",&b);
	int x;
	float eps=0.0001;
	
	if(f(a)==0) printf("\n Phuong trinh co nghiem x = %f",a);
	if(f(b)==0) printf("\n Phuong trinh co nghiem x = %f",b);
	
	if(f(a)*f(b)>0) {
		printf("\n Phuong trinh khong co nghiem trong khoang [a, b]");
		getch();
		exit(0);
	}
	
	while((b-a)>eps){	
		c = (b+a)/2.0;
		if(f(c)==0) {
			printf("Phuong trinh co nghiem la : %f", c);
			getch();
			exit(0);
		}
		else{
			if(f(a)*f(c)<0)
				b=c;
			if(f(b)*f(c)<0)
				a=c;			
		}
	}
	printf("Phuong trinh co nghiem la : %f",(a+b)/2.0);
	getch();
	return main();
	
}


1. Nhập 3 số nguyên, tìm ước chung lớn nhất của 3 số đó.
Gợi ý: Lập hàm tìm UCLN của hai số và gọi thực hiện trong hàm main()

#include<stdio.h>
#include<conio.h>


int ucln(int a, int b)
{
	int x; //UCLN cua a va b
       (a>b)?(x=b):(x=a);
       while((a%x!=0)||(b%x!=0))
       		x--;
       return x;
	
}

int main()
{
	int a, b, c;
	printf("Nhap ba so a, b, c : ");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("UCLN cua ba so %d, %d, %d la : %d", a, b, c, ucln(c, ucln(a,b)));
	getch();
	return 0;
	
}

2. Viết hàm tính giá trị giai thừa của một số nguyên. Sử dụng hàm để tính các
giá trị của bài toán đếm tổ hợp:
- Chỉnh hợp lặp chập k của n phần tử: F(k,n) = n
k

- Chỉnh hợp (không lặp) chập k của n phần tử: A(k,n) = n!/(n-k)!
- Hoán vị của n phần tử: P(n) = n!
- Hoán vị vòng quanh của n phần tử: Q(n) = (n+1)!
- Tổ hợp chập k các phần tử của n phần tử: C(k,n) = n!/k!(n-k)!

#include<stdio.h>
#include<conio.h>
#include<math.h>

int fact(int n)
{
	int fact = 1;
	for(int i = 1; i <= n; i++)
		fact = fact * i;
	return fact;
}

int F(int k, int n)
{
	int temp = 1;
	for(int i = 1; i <= k; i++)
		temp = temp * n;
	return temp;
}

int A(int k, int n)
{
	return fact(n)/fact(n-k);
}

int P(int n)
{
	return fact(n);
}

int Q(int n)
{
	return fact(n+1);
}

int C(int k, int n)
{
	return fact(n)/(fact(k)*fact(n-k));
}

int main()
{
	int n,k;
	printf("Nhap n : "); scanf("%d", &n);
	printf("Nhap k : "); scanf("%d", &k);
	
 	printf("Chinh hop lap la : %d\n",F(k,n));
 	printf("Chinh hop la : %d\n",A(k,n));
 	printf("Hoan vi la : %d\n",P(n));
 	printf("Hoan vi vong quanh la : %d\n",Q(n));
 	printf("To hop la : %d\n", C(k,n));
 	
 	getch();
 	return 0;
}

3. Bài toán số nguyên tố
 Kiểm tra một số nguyên dương n có là số nguyên tố không?
 In ra bảng các số nguyên tố nhỏ hơn n
 Tách một số nguyên thành tổng hai số nguyên tố

#include<stdio.h>
#include<conio.h>
#include<math.h>

int isPrime(int n)
{
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int print(int n)
{
	for(int i = 2; i < n ; i++)
	{
		if(isPrime(i) == 1)
		{
			printf("%d\t", i);
			
		}
	}
	
}


int splitTwoPrimes(int n)
{
	int i;
	for(i = 2; i < n/2; i++)
	{
		if(isPrime(i) == 1 && isPrime(n-i) == 1)
		{
			printf("\n%d + %d = %d",i,n-i,n);
		}
	}
		
}

int main()
{
	int n;
	printf("Nhap so n : "); scanf("%d",&n);
	
	if(isPrime(n) == 1)
		printf("%d la so nguyen to!\n", n);
	else
		printf("%d khong la so nguyen to!\n",n);
	
	
	print(n);
	splitTwoPrimes(n);

	
	getch();
	return 0;
}

4. Bài toán lãi suất tiết kiệm: T, S là số tiền gửi, t là số tháng gửi, k là lãi suất
 Gửi vào số tiền T ban đầu, với lãi suất k% một tháng thì sau t tháng sẽ
nhận được số tiền S là bao nhiêu?
 Gửi vào số tiền T ban đầu, với lãi suất k% một tháng, để nhận được số
tiền S thì phải gửi trong bao nhiêu tháng?
 Tính số tiền T gửi ban đầu, với lãi suất k% một tháng, để sau t tháng nhận
được số tiền S?
Tóm tắt 3 bài toán: Cho k,

Với 3 giá trị T,S,t cho hai giá trị tính giá trị còn lại

#include<stdio.h>
#include<math.h>
#include<conio.h>
// T la so tien gui
// t la so thang gui
// k la lai suat
// S la so tien nhan duoc 


// Tong tien nhan duoc S = T(1+k)^t
float tong_tien(float T, float k, float t)
{
	float x = 1 + k/100;
	float y = pow(x,t);
	float S = T * y;
	return S;
}



float so_tien_gui_ban_dau(float A, float k, float C)
{
	float d = 1 + k/100;
	float B = A/pow(d,C);
	return  B;
}

float so_thang(float A, float k, float T)
{
	float H = log(A/T)/log(1 + k/100);
	return H;
}

int main()
{
	float T, k, t, A, C, H;
	
	printf("so tien gui ban dau = ");
	scanf("%f", &T);
	
	printf("lai xuat hang thang = ");
	scanf("%f", &k);
	
	printf("so thang = ");
	scanf("%f", &t);
	
	printf("tong tien sau = ");
	scanf("%f", &A);
	
	printf("so thang sau = ");
	scanf("%f", &C);
	
	printf("tong tien  = %f\n", tong_tien(T,k,t));
	
	printf("so tien gui ban dau = %f\n",so_tien_gui_ban_dau(A,k,C));
	
	printf("so thang sau khi gui tien  = %f", so_thang(A,k, T));
	
	getch();
	return 0;	
}	


dãy số thực (a,n). Sắp xếp dãy theo thứ tự tăng dần. Nhập vào số
thực x. Kiểm tra xem x có xuất hiện trong dãy (a,n) hay không? Nếu không thì
thêm x vào dãy sao cho không thay đổi tính tăng cuả dãy.
3. Nhập vào dãy số thực (a,n) và một số thực x. Xóa đi các phần tử có giá trị
bằng x trong dãy số đã cho.
4. Nhập vào dãy số (a,n), kiểm tra xem có thể sắp xếp lại các phần tử của dãy
để được một dãy đối xứng không?
5. Nhập vào một ma trận (a,m,n), loại bớt các hàng giống nhau trong ma trận,
chỉ giữ lại 1 hàng (đầu tiên).
6. Nhập danh sách họ tên, sắp xếp danh sách theo thứ tự a, b, c của tên, nếu
trùng tên thì sắp theo họ đệm.

34

Sử dụng con trỏ trong các chương trình thao tác với dãy số, ma trận:
1. Viết hàm nhập dãy số, ma trận để nhập cả kích thước và giá trị các phần tử.
2. Nhập vào dãy

#include<stdio.h>
#include<math.h>



void inputArr(int a[], int n)
{
	int i;
	
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}
}

void outputArr(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d\t", &a[i]);
	}
}

void find(int a[], int n, int x)
{
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

void maxArr(int a[], int n)
{
	int i,max= a[0];
	for(i=1;i< n;i++){
		if(max<a[i]){
		max= a[i];
			}

	}
		printf("Phan tu lon nhat cua mang la:%d\n",max);
}

int Avg(int a[], int n)
{
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

int isPrime(int n)
{
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

void printPrimes(int a[], int n)
{
	
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


int symmetryArr(int a[],int n)
{
	int i;
	for(i=0;i< n/2;i++){
		if(a[i] != a[n-i-1]){
			return 0;
			break;
		}
		
	}
	return 1;
}

void sortArr(int a[],int n)
{
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



int main ()
{
	int n,x;
	int a[n];
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	inputArr(a,n);
	printf("Nhap X:");
	scanf("%d",&x);
	find(a,n,x);
	maxArr(a,n);
	printPrimes(a,n);
	sortArr(a,n);
	printf("Trung binh cong cac phan tu duong cua mang la:%f\n",Avg(a,n));
	if(symmetryArr(a,n)==1){
		printf("Cac phan tu trong mang doi xung");
	}
	else
	printf("Cac phan tu trong mang khong doi xung nhau");
	return 0;
	
	
}

___Mảng 2 chiều __


#include<stdio.h>
#include<conio.h>
#include<math.h>
int a[100][100];
int b[100][100];
int c[100][100];
int d[100][100];


int maxhang = 0,maxcot =0, sum = 0,m,n,p,q,i,j,tg,x;
//m,p hang n,q cot

void inputMatrix(int a[100][100],int m, int n)
{
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void outputMatrix(int a[100][100],int m, int n)
{
	for(i = 0; i < m; i++)
	{
		for(j = 0;j < n; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

void find(int a[100][100],int m, int n)
{
	int count = 0;

	for(i =0; i < m; i++)
	{
		for(j = 0; j < n;j++)
		{
			if(a[i][j] == x)
			{
				count++;
			} 
		}
	}
	
	if(count == 0)
	{
		printf("%d khong xuat hien trong ma tran",x);
	}
	else
	{
		printf("%d xuat hien trong ma tran",x);
	}
	
	printf("\nSo lan xuat hien cua %d trong ma tran la : %d",x,count);
	
	for(i = 0; i < m; i++)
	{
		for( j = 0; j < n; j++)
		{
			if(a[i][j] == x)
			{
				printf("\nVi tri xuat hien cua %d la a[%d][%d]",x,i,j);
			}
		}
	}
}

void chuyenvi(int a[100][100],int m, int n)
{
	for(j = 0; j < n; j++)
	{
		for(i = 0; i < m; i++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

void totalMatrix(int c[100][100],int a[100][100],int b[100][100],int m, int n)
{
	for(i =0; i < m; i++)
	{
		for(j = 0; j < n ;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	outputMatrix(c,m,n);
}

void multiplicationMatrix(int d[100][100],int m, int n, int p, int q)
{
	
	
	int i,j,k;
	if(n== p){
	
			
		printf("tich hai ma tran la:\n");
		for(i=0;i<m;i++){
			for(j=0;j<q;j++){
				d[i][j]=0;
				for(k=0;k<p;k++){
					d[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	outputMatrix(d,m,q);
			
	}
	
}


int maxSumRow(int a[100][100], int m, int n)
{
	int maxRow = 0, sum = 0;
	for(i = 0; i< m ; i++)
	{
		int tg = 0;
		for(j = 0;j < n; j++)
		{
			tg += a[i][j];
		}
		if(i = 0 || tg > sum)
		{
			sum = tg;
			maxRow = i;
		}
	}
	printf("\nTong gia tri cua cac phan tu cua hang %d la lon nhat bang %d",maxRow,sum);
}

void maxSumCol(int a[100][100], int m, int n)
{
	int maxCol = 0, sum = 0;
	for(i = 0; i < m; i++)
	{
		int tg = 0;
		for(j = 0; j < n; j++)
		{
			tg += a[i][j];
		}
		if(j == 0 || tg > sum)
		{
			sum = tg;
			maxCol = j;
		}
	}
	printf("\n Tong gia tri cua cac phan tu cua cot %d la lon nhat bang %d\n",maxCol, sum);
}

void convertMatrix(int a[100][100], int m, int n)
{
	int i,j,k,f[100],sum = 0;
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			sum++;
		}
		f[i] = sum;
	}
	
	for(i = 0; i< m-1; i++)
	{
		for(k = i+1; k < m; k++)
		{
			if(f[i] < f[k])
			{
				int tg = f[i];
				f[i] =f[k];
				f[k] = tg;
				
				for(j = 0; j < n; j++)
				{
					tg = a[i][j];
					a[i][j] = a[k][j];
					a[k][j] = tg;
				}
			}
			
		}
	}
	outputMatrix(a,m,n);
}


int main()
{
	int a[100][100];
	int b[100][100];
	int c[100][100];
	
	printf("Nhap so hang m = "); scanf("%d", &m);
	printf("Nhap so cot n = "); scanf("%d", &n);
	inputMatrix(a,m,n);
	outputMatrix(a,m,n);
	printf("Nhap x = "); scanf("%d",&x);
	find(a,m,n);
	printf("\nChuyen vi cua ma tran\n");
	chuyenvi(a,m,n);
	
	//nhap ma tran b
	printf("Nhap so hang p = "); scanf("%d", &p);
	printf("Nhap so cot q = "); scanf("%d", &q);
	inputMatrix(b,m,n);
	outputMatrix(b,m,n);
	printf("Tong hai ma tran la");
	totalMatrix(c,a,b,m,n);
	
	printf("\nTich hai ma tran la");
	multiplicationMatrix(d,m,n,p,q);
	maxSumCol(a,m,n);
	maxSumRow(a,m,n);
	convertMatrix(a,m,n);
	
	
	
	
	getch();
	return 0;
}


Các bài toán với xâu kí tự
 Nhập vào một xâu st và một ký tự ch, hãy thông báo xem ký tự ch có
xuất hiện trong xâu st hay không, nếu có thì xuất hiện bao nhiêu lần, ở
những vị trí nào?
 Đếm xem trong xâu st có bao nhiêu loại kí tự, mỗi loại xuất hiện bao
nhiêu lần.
 Sắp xếp lại các ký tự trong một xâu theo thứ tự a,b,c.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void timso(char kiemtra[200], char c)
{
	int i, count = 0;
	for(i = 0; i < strlen(kiemtra); i++)
	{
		if(kiemtra[i] == c)
			count++;
	}
	if(count > 0)
		printf("Ky tu %c xuat hien trong day %d lan\n",c, count);
	if(count == 0)
		printf("Ky tu %c khong xuat hien trong day\n",c);
}

void dem(char kiemtra[200], char c)
{
	int i, dem = 0;
	for(i = 0; i < strlen(kiemtra); i++)
	{
		if(kiemtra[i] == c)
		{
			dem++;
			printf("Ky tu %c xuat hien lan %d tai vi tri %d\n",c,dem,i);
		}
	}

}

void loaikytu(char kiemtra[200])
{
	int i, count = 0;
	for(i = 0; i < strlen(kiemtra); i++)
	{
		if(kiemtra[i] >= 'a'  && kiemtra[i] <= 'z')
		{
			count++;
		}
	}
	printf("\nTrong xau co %d loai ky tu\n", count);
}

void solanxuathien(char kiemtra[200])
{
	char size[100];
	int count = 0;
	for(int i = 0; i < strlen(kiemtra); i++)
		for(int j = 0; j < strlen(size); j++)
			if(kiemtra[i] == kiemtra[j])
			{
				count++;
				break;
			}
			
	for(int i = 0; i < strlen(kiemtra); i++)
	{
		printf("%c\t   %d\n",kiemtra[i], count);
	}
	printf("\n");
}

void sapxep(char kiemtra[200])
{
	int i,j;
	char temp;
	for(i = 0; i < strlen(kiemtra)-1; i++)
		for(j = i + 1; j < strlen(kiemtra); j++)
		{
			if(kiemtra[i] > kiemtra[j])
			{
				temp = kiemtra[i];
				kiemtra[i] = kiemtra[j];
				kiemtra[j] = temp;
			}
		}
	printf("Xau ky tu da sap xep la %s\n", kiemtra);
}


int main()
{
	char kiemtra[200], n;
	int count = 0;
	printf("Nhap day ky tu : ");
	gets(kiemtra);
	puts(kiemtra);
	printf("Nhap ky tu : "); scanf("%c",&n);
	
	timso(kiemtra,n);
	dem(kiemtra,n);
	loaikytu(kiemtra);
	solanxuathien(kiemtra);
	sapxep(kiemtra);
	getch();
	return 0;
}


Các bài toán với xâu kí tự kiểu họ tên
 Chuẩn hoá xâu ký tự kiểu họ tên: Không có ký tự trống đầu và cuối xâu,
các từ trong xâu được bắt đầu bằng một chữ cái viết hoa, tiếp theo là các
chữ cái viết thường và cách nhau một ký tự trống.
 Sắp xếp danh sách kiểu họ tên theo a,b,c. Trước hết sắp theo tên, nếu
trùng tên thì sắp theo họ.

#include<stdio.h>
#include<string.h>

void Chuhoakytudau(char s[])
{
	int i,j;
	if(s[0] == ' ')
	{
		for(i = 0; i < strlen(s); i++)
			if(s[i] == ' ' && s[i+1] != ' ')
				s[i+1] = s[i+1] - 32;
	}
	
	else
	{
		s[0] = s[0] - 32;
		for(j = 1; j < strlen(s); j++)
			if(s[j] == ' ' && s[i+1] != ' ')
				s[j+1] = s[j+1] - 32;
		
	}
}

int main()
{
	char s[200];
	int i;
	printf("nhap xau : ");
	gets(s);
	
	while(s[0] ==' ') strcpy(&s[0], &s[1]);
	for(i = 0; i < strlen(s)-1; i++)
	{
		if(s[i] == ' ' && s[i+1] == ' ')
		{
			strcpy(&s[i], &s[i+1]);
			i--;
		}
	}
	while(s[strlen(s)-1] == ' ')
		strcpy(&s[strlen(s)-1], &s[strlen(s)]);
		
	printf("Chuoi chuan hoa la : ");
	printf("\"%s\"\n",s);
	Chuhoakytudau(s);
	puts(s);
	return 0;
}

__ SỬ DỤNG CON TRỎ POINTERS __

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


