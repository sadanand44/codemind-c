#include<stdio.h> 
int main(){
    int n,b=0,a;
    scanf("%d",&n);
    int c=n;
    while(n!=0){
         a=n%10;
        b=b*10+a;
        n=n/10;
    }
    if(c==b)
    {
        printf("Palindrome");
        
    }
        else{
            printf("Not Palindrome");
        }
        return 0;
    
}