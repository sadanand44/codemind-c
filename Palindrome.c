#include<stdio.h>
int main(){
    int n,a,b=0,c;
    scanf("%d",&n);
    c=n;
    while(n!=0){
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    if(c==b){
        printf("True");
    }
    else
        printf("False");
    
}