#include<stdio.h>

int palindrome(int i){
    int temp,rev=0,j,n;
    temp=i;
    for(j=0;i!=0;j++){
        n=i%10;
        rev=rev*10+n;
        i=i/10;
    }
    if(rev==temp){
        return printf("its a pallindrome");
    }
    else{
        return 0;
    }
}

int main(){
    int y;
    printf("enter the number for check");
    scanf("%d",&y);
    palindrome(y);







}