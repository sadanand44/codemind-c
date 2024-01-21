#include<stdio.h> 
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x,y,z;
    x=a+b;
    y=a+c;
    z=b+c;
    if(x>y&&x>z){
        printf("%d",x);
        }
    else if(y>z&&y>x){
        printf("%d",y);
    }
    else{
        printf("%d",z);
    }
}