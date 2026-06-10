#include<stdio.h>


//Q41.SUM BY FUNCTION
int sum(int n, int p){
    printf("%d",n+p);
    return n+p;
}

//Q43. max by function

int max(int r,int m){
    if(r>m){
        printf("\nthe greatest bumber is");
    
        return r;

    }
    else{
        printf("\nthe greatest number is");
        return printf("%d",m);
    }
}


//Q43.PRIME NUMBER FROM FUNCTION
int prime(int c){
    int i;
       
  
    if(c<=1){
        return printf("notprime");
    }
    else{
    for(i=2;i<=c-1;i++){
        if (c%i==0){
return printf("notprime");
    break;
    }

    return printf("\nprime");

    
}
}

}

//Q44. FACTORIAL BY FUNCTION
int factorial(int k){
    int j,fact=1;
    for(j=1;j<=k;j++){
        fact=fact*j;

    }
    return printf("%d",fact);
}




int main(){
    
    int v,b,s,o;
    printf("enter the numers");
    printf("\nenter number 2");
    scanf("%d%d",&s,&o);
    sum(s,o);
    max(s,o);
    printf("\nenter the number for prime");
    scanf("%d",&b);
    prime(b);
    printf("\nenter the number for factorial");
    scanf("%d",&v);
    factorial(v);
}

