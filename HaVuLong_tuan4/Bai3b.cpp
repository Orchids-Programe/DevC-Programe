#include<stdio.h>
#include<conio.h>
#include<math.h>

int prime(int n)
{
	if(n<2)
		return 0;
	
	int i;
	for(i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	printf("Nhap so n : "); scanf("%d", &n);
	printf("Nhung so nguyen to nho hon %d la  : \n",n);
	
	
	for(int i = 2; i <= n; i++)
		if(prime(i) == 1)
			printf("%d\n",i);
			

	printf("%d so nguyen to dau tien la : \n", n);
	int count = 0;
	int i = 2;
	while(count < n)
	{
		if(prime(i)){
			printf("%d\n", i);
			count++;
		}
		i++;
	}

	
	getch();
	return 0;
}
