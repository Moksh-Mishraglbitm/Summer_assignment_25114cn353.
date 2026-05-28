//Q1.sum of n natural number

#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        
        sum=sum+i;}
    printf("%d",sum);
}

//#Q2.multiplication table of agiven number 
#include<stdio.h>
int main(){
    int i,c;
    printf("enter the number for table");
    scanf("%d",&c);
    for(i=1;i<11;i++){
        printf("%d\n",c*i);
    
    }
} 
//Q3.factorial of a number
#include<stdio.h>
int main(){
    int i,fact=1,r;
    printf("enter the number for factorial");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        fact=fact*i;}
    printf("%d",fact);
    
}
//Q4.COUNT DIGITS OF NUMBER //

#include<stdio.h>
int main(){
    int i,b,c=0;
    printf("enter the numb");
    scanf("%d",&b);
    while(b>0){
        c=c+1;
        b=b/10;
    }
printf("%d",c);
    
    
}

