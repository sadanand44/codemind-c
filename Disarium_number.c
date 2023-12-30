#include<stdio.h>
#include<math.h>
int main(){
    int n,a,rev=0,m,c,sum=0,count=0,i,b;
    scanf("%d",&n);
    m=n;
    while(n!=0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;count++;
    }
    for(i=1;i<=count;i++){
        c=rev%10;
        sum=sum+pow(c,i);
        rev=rev/10;
         } 
    
    if(m==sum){
        printf("True");
    }
    else{
        printf("False");
    }
}