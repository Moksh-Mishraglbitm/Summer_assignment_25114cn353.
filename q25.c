#include<stdio.h>
int main(){
    int x,n,i,res=1;
    printf("enter the base");
    printf("enter the power");
    scanf("%d%d",&x,&n);
    for(i=0;i<=n;i++){
        res=res*x;
    }
    printf("%d",res);


}