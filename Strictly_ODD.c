#include<stdio.h>
int main(){
    int n,i,j,a=0,b=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(i%2!=0){
         a=a*10+i;   
        }
    }
     for(i=0;i<n;i++){
        if(i%2!=0||arr[i]%2!=0){
         b=b*10+i;   
        }
    }
    if(a==b){
        printf("True");
    }
    else{
        printf("False");
    }
    
}