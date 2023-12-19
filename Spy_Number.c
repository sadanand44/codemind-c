#include<stdio.h>
int main(){
    int n,a,b=1,d=0;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        n=n/10;
        b=b*a;
         d=d+a;
    }
    if(b==d){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}