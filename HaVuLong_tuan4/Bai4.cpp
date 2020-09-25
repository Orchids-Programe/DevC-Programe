#include<stdio.h>
#include<math.h>
#include<conio.h>

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


	
