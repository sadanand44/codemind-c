#include<stdio.h>
int main(){
    int n,i,a,b,max=0,j=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        scanf("%d%d",&a,&b);
        for(i=0;i<n;i++){
            if(arr[i]<a||arr[i]>b){
                if(arr[i]>max){
                    max=arr[i];j++;
                }
            }
         }
         if(j==0){
             printf("-1");
         }
        else{ printf("%d",max);}
}