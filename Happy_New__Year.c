#include<stdio.h> 
int main(){
    int h,m;
    scanf("%d%d",&h,&m);
    int rh=24-h-1;
    int rm=60-m;
    printf("%d",rh*60+rm);
}