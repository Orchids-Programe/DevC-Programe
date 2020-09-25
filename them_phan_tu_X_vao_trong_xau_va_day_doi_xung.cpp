#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void input_array(int (*a), int *size)

{
	printf("Nhap so phan tu cua mang: ");
    scanf("%d", size);
    
	for(int i=0; i<*size;i++)
	{
		printf("a[%d] = ", i);
		scanf("%d",(a+i));
	}
}

void output_array(int *a, int size)
{
	for(int i=0; i<size;i++)
	{
		printf("%d\t", a[i]);
		
	}
	printf("\n");
}

void sap_xep_theo_thu_tu_tang_dan(int *a, int size)
{
	int temp;
	printf("\nchuoi sau khi sap xep tang dan: ");
	for(int i=0; i<size; i++){
		for(int j=i+1;j<size;j++){
			if(*(a+i) > *(a+j)){
				temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;	
			}
		}
		printf("%d\t", *(a+i));
	}
	
}

int kiem_tra(int *a, int size, int x)
{
	printf("\nnhap x = ");
	scanf("%d", &x);
	int i, vt,k=0;
	for(int i = 0;i<size;i++){
		if(*(a+i)==x){
			k=1;
			printf("phan tu x= %d co xuat hien trong day", x);
			break;	
		}
	}
	if(k==0)
	{
		printf("phan tu x= %d khong xuat hien trong day", x);
		if(vt>=0&&vt<=size)
		{
			for(int i=size;i>vt;i--){
				*(a+i)=*(a+i-1);
			
			*(a+vt)=x;
			size++;
			}
			
		}
			
	}
		/*printf("\nchuoi sau khi them phan tu x = %dla: ", x);
			for(int i=vt;i<size;i++){
				printf("%d",*(a+i));
			} */
}

void ThemPhanTu(int *a, int &size, int x, int vt)
{
	if(vt>=0 && vt<=size)
	{
		for(int i=size; i>vt; i--)
			a[i] = a[i-1]; 
		a[vt]=x; 
		size++; 	
	}
	else
		printf("\nVi tri %d khong hop le.", vt);
}

void xoa1phantu(int *a,int *size,int vt)
{
     int i;
     for(i=vt;i<*size-1;i++)
          a[i]=a[i+1];
     (*size)--;
}
   
                       
void xoax(int *a,int *size,int x)
{
     int i;
     for(i=0;i<*size;i++)
     if(x==a[i])
     {
                xoa1phantu(a,size,i);
                i--;
     }
}




void day_doi_xung(int *a, int size)
{
	int mark=0;
	for(int i = 0;i<size/2;i++)
	{
		if(*(a+i)!=*(a-1-i+size)){  // a[i]=a[size-i-i]
			mark=1;
			printf("\nmang khong doi xung");
			break;
		}
	}
	if(mark==0) printf("\nmang doi xung");
}


int main(int argc, char *argv[])
{
	int *a, size,x,vt;
	a=(int*)malloc(size*sizeof(int));
	input_array(a,&size);
	output_array(a,size);
	sap_xep_theo_thu_tu_tang_dan(a,size);
	kiem_tra(a,size,x);
	day_doi_xung(a,size);
	printf("\nNhap gia tri can xoa trong mang:  ");
    scanf("%d",&x);
	xoax(a,&size,x);
	printf("\nMang sau khi xoa ");
    for(int i=0;i<size;i++)
    printf("\n %d",a[i]);
    ThemPhanTu(a,size,x,vt);
	free(a);
	return 0;
}
