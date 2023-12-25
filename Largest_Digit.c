#include<stdio.h> 
int main(){
    int n ,x=0;
    scanf("%d",&n);
    while(n!=0){
        int a=n%10;
        n=n/10;
        if(x<a){
            x=a;
        }
    }
    printf("%d",x);
}