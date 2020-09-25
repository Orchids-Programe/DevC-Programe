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

