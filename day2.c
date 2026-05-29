//Q5.SUM OF DIGITS OF A NUMBER
#include<stdio.h>
int main(){
    int r,n,b,c,pro=1,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
printf("%d\n",sum); 
//Q6.REVERSE A NUMBER
printf("enter the number");
scanf("%d",&b);
int rev=0;
while(b>0){
    r=b%10;
    rev=rev*10+r;
    b=b/10;


}
printf("%d\n",rev);
//Q7.PRODUCT OF DIGITS
printf("enter the number");
scanf("%d",&c);
while(c>0){
        r=c%10;
        pro=pro*r;
        c=c/10;
    }
    printf("%d\n",pro); 

//Q7.PALINDROME
int reverse=0, temp,d;
printf("enter the number");
scanf("%d",&d);

temp=d;
while(d>0){
    r=d%10;
    reverse=reverse*10+r;
    d=d/10;
}
if (temp==reverse){
    printf("its a palindrome");
}
else
printf("not palindrome");









}