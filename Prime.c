#include<stdio.h> 
int main(){
    int n,i=2;
    scanf("%d",&n);
while(i<n){
    if(n%i==0){
        
        break;
            }
            i++;
    }
    if(i==n){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    
}