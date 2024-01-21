#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=n%3;
    if(n==1||x==1){
        printf("HUGE");
    }
    else if(n==2||x==2){
        printf("SMALL");
    }
    else{
        printf("NORMAL");
    }
}