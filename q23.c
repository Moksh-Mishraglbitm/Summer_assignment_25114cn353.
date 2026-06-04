#include<stdio.h>
int main(){
    int temp,n,i=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        temp=n%10;
        if(temp==1){
            i=i+1;
        }
        n=n/10;
    }
printf("%d",i);
}
