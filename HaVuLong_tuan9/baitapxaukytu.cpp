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

bool check(char d[], char c)
{
	for(int i = 0; i < strlen(kiemtra); i++)
	{
		if(d[i] == c)
			return true;
	}
	return false;
}

void kytu(char kiemtra[200], char d[])
{
	int i = 0, j = 0;
	while(kiemtra[i] == ' ')
	{
		i++;
	}
	d[j] = kiemtra[i];
	for(j = 1; j < strlen(kiemtra); j++)
	{
		if(check(d,kiemtra[i]) == false)
		{
			j++;
			d[j] = kiemtra[i];
		}
	}
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
	getch();
	return 0;
}
