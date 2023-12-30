#include<stdio.h> 
int main(){
    int a,b,i,hcf;
    scanf("%d%d",&a,&b);
    if(b<=a){
        for(i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                hcf=i;
    }
     }
            printf("%d",hcf);
    }
    else{
        for(i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                hcf=i;
            }
        }
    }
    printf("%d",hcf);
    
}