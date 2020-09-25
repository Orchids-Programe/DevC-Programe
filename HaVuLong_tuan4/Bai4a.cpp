#include<stdio.h>
#include<conio.h>
#include<math.h>

float tien(float tien_dau)
{
	int nam;
	float k;
	float tien_sau = (float)tien_dau;
	float tien_lai;
	for(int i = 0; i <= nam; i ++)
		tien_lai = tien_sau * k;
		tien_sau = tien_sau + tien_lai;
	return (float)tien_sau;
}

int main()
{
	float tien_dau; 
	printf("Nhap so tien ban dau n : ");
	scanf("%f", &tien_dau);
	
	int nam;
	printf("Nhap so nam : "); scanf("%d", &nam);
	
	float k;
	printf("Nhap lai suat : "); scanf("%f", &k);
	
	printf("So tien nhan duoc la : %f", tien(tien_dau));
	
}
