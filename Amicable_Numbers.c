#include<stdio.h>
int main(){
    int n,m,i,sumN=0,sumM=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<n;i++){
        if(n%i==0){
            sumN=sumN+i;
        }
    }
    for(i=1;i<m;i++){
       sumM=sumM+i;
    }
    if(sumN==m ||sumM==n){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}