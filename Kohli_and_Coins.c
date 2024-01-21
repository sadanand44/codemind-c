#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a=x/10;
    int b=x%10;
    int c=b/5;
    int d=b%5;
    if(d==0){
        printf("%d",a+c);
    }
    else{
        printf("-1");
    }
}