#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
  int a=x/5;
  int b=x%5;
  int c=b/4;
  int d=b%4;
  int e=d/3;
  int f=d%3;
  int g=f/2;
  int h=f%2;
  if(x>=5){
      printf("%d",a+c+e+g+h);
  }
    
}