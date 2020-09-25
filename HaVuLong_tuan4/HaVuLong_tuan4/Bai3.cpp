#include<stdio.h>
#include<conio.h>
#include<math.h>

int isPrime(int n)
{
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int print(int n)
{
	for(int i = 2; i < n ; i++)
	{
		if(isPrime(i) == 1)
		{
			printf("%d\t", i);
			
		}
	}
	
}


int splitTwoPrimes(int n)
{
	int i;
	for(i = 2; i < n/2; i++)
	{
		if(isPrime(i) == 1 && isPrime(n-i) == 1)
		{
			printf("\n%d + %d = %d",i,n-i,n);
		}
	}
		
}

int main()
{
	int n;
	printf("Nhap so n : "); scanf("%d",&n);
	
	if(isPrime(n) == 1)
		printf("%d la so nguyen to!\n", n);
	else
		printf("%d khong la so nguyen to!\n",n);
	
	
	print(n);
	splitTwoPrimes(n);

	
	getch();
	return 0;
}


