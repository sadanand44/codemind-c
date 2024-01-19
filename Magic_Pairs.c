#include<stdio.h>
int main(){
    int n,i,j,a=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            int s=i+j;
           if(s%2!=0){
               a++;
           } 
        }
    }
    printf("%d",a);
}