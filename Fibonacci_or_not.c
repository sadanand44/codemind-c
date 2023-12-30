#include<stdio.h>
int main(){
    int n,i,fib,fib1=0,fib2=1,c,count=0;
    scanf("%d",&n);
    c=n;
       while(c!=0){
            fib=fib1+fib2;
            fib1=fib2;
            fib2=fib;
            c--;
            if(fib1==n){
                count+=1;
            }
    }
    if(count!=0) printf("True");
    else printf("False");
}