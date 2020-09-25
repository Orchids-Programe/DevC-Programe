#include<stdio.h>
#include<string.h>

void DoiChuHoa(char s[]) {
	int i,j;
	if(s[0] == ' '){
	for(i=0; i<strlen(s); i++) {
		if(s[i] ==' ' && s[i+1] !=' ')
			s[i+1] = s[i+1] - 32;
		}   
		    
	}
	
	else
	{
		s[0] = s[0] - 32;
			for(j=1; j<strlen(s); j++) {
				if(s[j] ==' ' && s[j+1] !=' ')
					s[j+1] = s[j+1] - 32;    
			}          
		}
}

int main()
{
	char string[200];
	int i;
	printf("string before sorting: \n");
	gets(string);
	
	
	while(string[0]==' ') strcpy(&string[0], &string[1]);
	
	for(i=0;i<strlen(string)-1;i++){
		if(string[i]==' ' &&string[i+1]==' ' ){
			strcpy(&string[i], &string[i+1]);
			i--;
		}
	}
	
	while(string[strlen(string)-1]==' ')
		strcpy(&string[strlen(string)-1], &string[strlen(string)]);
		
		
	printf("standardized string: ");	
	printf("KQ: \"%s\"\n",string);
	DoiChuHoa(string);
	puts(string);
	return 0;
	
	
}
