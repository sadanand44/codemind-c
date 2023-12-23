#include<stdio.h> 
int main(){
    int b,n,a,inversenum=0 ;
    b=n;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        inversenum=inversenum*10+a;
        n=n/10;
    }
    if(b<0){
        printf("%d",inversenum);
    }
    else{
        printf("%d",inversenum);
    }
}