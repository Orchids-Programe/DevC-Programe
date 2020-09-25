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
