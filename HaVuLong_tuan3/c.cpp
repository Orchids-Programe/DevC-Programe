#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    float tien_ban_dau = 100;
    int        so_nam = 10;
    float tien_ve_sau = tien_ban_dau;
    for(int i = 0; i < so_nam; i = i + 2){
        float lai = tien_ve_sau * (16.0 /100.0);
        tien_ve_sau += lai;
        printf("lai = %.2f, \ttien hien tai = %.2f, \t sau %d nam\n", lai, tien_ve_sau, i+2);
    }
    printf("tien ban dau = %.2f, tien ve sau = %.2f, gap %.2f lan\n",tien_ban_dau, tien_ve_sau, tien_ve_sau/tien_ban_dau);
}
