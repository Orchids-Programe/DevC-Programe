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
