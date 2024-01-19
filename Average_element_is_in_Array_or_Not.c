#include<stdio.h>
int main(){
    int n,i,j,sum=0,l=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int avg=sum/n;
    for(i=0;i<n;i++){
        if(arr[i]==avg){
            l++;
             }
         }
         if(l==0){
             printf("False");
         }
         else{
             printf("True");
         }
}