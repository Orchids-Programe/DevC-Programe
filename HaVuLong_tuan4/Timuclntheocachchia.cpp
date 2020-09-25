#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;
	printf("Nhap so a : ");
	scanf("%d", &a);
	printf("Nhap so b : ");
	scanf("%d", &b);
	
	// lap toi khi 1 trong 2 so bang 0
	 while (a*b != 0){ 
        if (a > b){
            a %= b; // a = a % b
        }else{
            b %= a;
        }
    }
	
	printf("UCLN la : %d", a);
	getch();
	return 0;
	
}
