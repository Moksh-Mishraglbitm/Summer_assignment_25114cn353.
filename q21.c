#include<stdio.h>
int main(){
    int b=0,rev,i,n,rem;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        rem=n%2;
        n=n/2;
        rev=rem%10;
        b=b*10+rem;
        rem=rem/2;


    }
    printf("%d",b);
}