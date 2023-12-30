#include<stdio.h> 
int main(){
    int n ,i,fib,fib1=0,fib2=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",fib1);
    
     fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
    }
}