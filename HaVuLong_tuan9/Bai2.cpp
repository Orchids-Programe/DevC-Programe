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















