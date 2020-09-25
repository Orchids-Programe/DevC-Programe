#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b,max,step,bcnn=0;
	printf("Nhap hai gia tri a va b : "); 
	scanf("%d%d", &a,&b);
	if(a > b)
		max = step = a;
	else 
		max = step = b;
	
	while(1)
	{
		if(max % a == 0 && max % b == 0)
		{
			bcnn = max;
			break;
		}
		max = max + step;
	}
	printf("BCNN cua %d va %d la : %d",a,b,bcnn);
	
	getch();
	return 0;
}

/*#include<conio.h>
#include<stdio.h>
int fb(int n)
{
    if(n==1||n==0||n==2||n==3) return n;//fb la fibonacci
   return fb(n-2)+fb(n-1);
}
int main()
{
   int i,n,d=0;
   printf("n = ");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
       if(n==fb(i))
       {
            d++;            
       }
   if(d==1) printf("%d thuoc day fibonacci",n);
   else printf("%d khong thuoc day fibonacci",n);
   getch();
} */
