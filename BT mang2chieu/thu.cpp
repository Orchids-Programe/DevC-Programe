#include <stdio.h>
#include <conio.h>

//Function to switch value of two variables (?!)
void doi_cho(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a  = *b;
	*b  = tmp;
}

//MAIN FUNCTION
int main()
{
	int x=10,y=15;
		
    printf("\n x = %d;  y = %d",x,y);
    doi_cho(&x,&y);   
    printf("\n x = %d;  y = %d",x,y);

	getch();
    return 0;	
	
}
