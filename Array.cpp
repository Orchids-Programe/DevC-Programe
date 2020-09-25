#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
// Ham nhap mang 1 chieu su dung con tro
void inputArray(int *array, int size)
{
	for(int i = 0; i< size; i++ )
	{
		printf("\n array[%d] = ", i);
		scanf("%d",(array+i));
	}
}

// Ham in mang 1 chieu su dung con tro
void outputArray(int *array, int size)
{
	for(int i = 0; i< size; i++ )
	{
		printf("\t %d ", *(array+i));
	}
}
int main(int argc, char *argv[])
{
	int array[50];
	int *pointer;
	int n;
	printf("\n Nhap kich thuoc day so vao day");
	scanf("%d",&n);
	pointer=(int *)malloc(n*sizeof(int));
	pointer=array;
	inputArray(pointer,n);
	outputArray(pointer,n);
	free(pointer);
	getch();
	return 0;
}
