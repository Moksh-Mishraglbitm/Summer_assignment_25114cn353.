#include<stdio.h>

int armstrong(int a){
    int temp,sum=0,n;
    temp=a;
    while(a>0){
        n=a%10;
        sum=sum+(n*n*n);
        a=a/10;


    }
    if(temp==sum){
        return printf("its an armstrong");
    }
    else{
        return 0;
    }
}




int main(){
    int i;
    printf("enter the number");
    scanf("%d",&i);
    armstrong(i);

}