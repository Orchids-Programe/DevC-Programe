#include<stdio.h>
#include<conio.h>
using namespace std;
void nhap(int a[][50], int &n,int &m)
{
 printf("nhap so dong:");
 scanf("%d",&n);
 printf("nhap so cot:");
 scanf("%d",&m);
 for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
    {
      printf("phan tu thu a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
}
void xuat(int a[][50], int n, int m)
{
 for(int i=0;i<n;i++)
  {
   for(int j=0;j<m;j++)
     {
      printf("%4d",a[i][j]);
 }
     printf("\n");
  }
}
void TongCot(int a[][50],int n,int m)
{
 
 for(int i=0;i<m;i++)   
  {
   int s=0;
     for(int j=0;j<n;j++)
      {
      s=s+a[j][i];
      }
     printf("\n Cot thu %d co tong la: %d",i,s); 
   }
}

void TongDong(int a[][50],int n,int m)
{
 
 for(int i=0;i<n;i++)   
  {
   int s=0;
     for(int j=0;j<m;j++)
      {
      s=s+a[i][j];
      }
     printf("\n Dong thu %d co tong la: %d",i,s); 
   }
}


int main()
{
 int a[50][50],n,m;
 nhap(a,n,m);
 xuat(a,n,m);
 
 TongCot(a,n,m);
      
	TongDong(a,n,m);

 return 0;
}
