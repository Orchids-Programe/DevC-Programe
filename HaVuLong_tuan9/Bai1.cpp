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
