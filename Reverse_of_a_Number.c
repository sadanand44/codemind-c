#include<stdio.h> 
int main(){
    int n,revnum=0;
    scanf("%d",&n);
    while(n!=0){
        int a=n%10;
        revnum=revnum*10+a;
        n=n/10;
        
    }
    printf("%d",revnum);
}