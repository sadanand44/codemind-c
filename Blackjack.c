#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int z=21-(x+y);
    if(x<=10&&y<=10){
        if(z<=10){
            printf("%d",z);
        }
        else{
            printf("-1");
        }
    }
}