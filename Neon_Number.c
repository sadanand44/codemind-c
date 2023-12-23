#include<stdio.h> 
#include<math.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int b=pow(n,2);
    while(b!=0){
        int a=b%10;
        b=b/10;
        sum=sum+a;
        }
        if(n==sum){
            printf("Neon Number");
        }
        else{
            printf("Not Neon Number");
        }
    
}