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
