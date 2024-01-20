#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int a=500-2*x;
    int b=1000-4*(y+x);
    int c=500-2*(x+y);
    int d=1000-4*y;
    if(a+b>c+d){
        printf("%d",a+b);
    }
    else{
        printf("%d",c+d);
    }
}