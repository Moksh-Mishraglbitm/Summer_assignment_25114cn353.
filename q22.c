#include<stdio.h>
#include<math.h>
int main(){
    int temp,sum=0,c=0,i,n,j;
    printf("enter the number");
    scanf("d",&n);
    temp=n;
    while(n>0){
        n=n/10;
        c=c+1;

    }
   int rev,rem=0, power=0;
    while(temp>0){
        j=temp%10;
        
     
            j=(j)*pow(2,power);
            sum=sum+j;
            c--;
            temp=temp/10;
    }
        

    printf("%d",sum);
}