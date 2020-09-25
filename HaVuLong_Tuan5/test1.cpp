#include<stdio.h>

int main()
{
	int n = 5, i, s=0;
	int a[n];
	
	for(i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d vao mang = ", i);
        scanf("%d", &a[i]);
	}
	
	printf("In ra mang da nhap \n");
	
	
	for(i = 0; i < n; i++)
	{
		printf("%d \t", a[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		s = s + a[i];
	}
	
	printf("\nTong cua mang da nhap la : %d", s);
	
	return 0;
}
