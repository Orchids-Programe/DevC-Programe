#include<stdio.h>
#include<string.h>

void check(char string[], char n){
	int i, count=0;
	for(int i=0; i<strlen(string);i++)
	{
		if(string[i]==n){
			printf("ki tu %c xuat hien o vi tri %d\n", n, i);
		count++;
		}
	}
	if(count==0) printf("ki tu %c khong xuat hien trong day\n");
	if(count>0) printf("ki tu %c xuat hien %d lan\n", n, count);
}
void character_count(char string[])
{
	int i, count = 0;
	for(i = 0;i<strlen(string);i++)
	{
		if(string[i]>='a'&& string[i]<='z');
		count++;
	}
	printf("\ntrong xau co %d loai ki tu\n", count);
}
void sorted(char string[])
{
	int i, j;
	char temp;
	for(i=0;i<strlen(string)-1;i++){
		for(j=i+1;j<strlen(string);j++){
			if(string[i]>string[j]){
				temp=string[i];
				string[i]=string[j];
				string[j]=temp;
			}
		}
	}
	printf("\nThe sorted string is %s\n", string);
}
void count(char string[])
{
	char size[100];
	int count=0;
	for(int i = 0;i<strlen(string);i++){
		for(int j=0;j<strlen(size);j++){
			if(string[i]==string[j]){
				count++;
				break;
			}
		}
	}
		
	for(int i = 0;i<strlen(string);i++)
	{
		printf("%c\t  %d\n",string[i], count);
	}
	printf("\n");
}
/*void count(char string[])
{
	int i, j, count=0;
	char size[200];
	for(j=0;j<strlen(xau);j++){
            for(i=0;i<strlen(size);i++){
                if(xau[j]==size[i]){
                    count++;
                    break;
                }
            }
            
        }
	for(int i = 0;i<strlen(xau);i++)
	{
		
		printf("%c\t  %d\n",xau[i], count);
	}
	printf("\n");
}*/

int main()
{
	char string[200],n;
	printf("string before sorting: ");
	gets(string);
	puts(string);
	printf("Entre the charactes : ");
	scanf("%c", &n);
	check(string,n);
	character_count(string);
	sorted(string);
	count(string);
	return 0;
}
