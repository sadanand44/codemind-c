#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
   // int r=a%b;
  //  int t=b-r;
    if(a>b&&a%b!=0){
    printf("%d",b-(a%b));
}
else if(b>a){
    printf("%d",b-a);
}
else if(a%b==0){
    printf("0");
    
}

    
}