#include<stdio.h>
int main(){
    //Q9.PRIME NUMBER OR NOT
    
    
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    if(n<=1){
        printf("notprime");
    }
    else{
    for(i=2;i<=n-1;i++){
        if (n%i==0){
printf("notprime");
    break;
    }
if(i==n){
    printf("\nprime");

    
}}
}
printf("\nq8 done");


//Q10.PRIME NUMBER OF A RANGE
int prime,z,j,k;
printf("\nenter the range");
scanf("%d",&k);
for(j=2;j<=k;j++){
  prime=1;
    for(z=2;z<=j-1;z++){
        if (j%z==0){
            prime=0;
            break;
        
        }
    }
        if(prime==1){
            printf("%d\n",j);
        
    }
}
    
printf("q10 finished");


//Q11. FIND GCD OF TWO NUMBER

int gcd,e,m,v,o;
printf("enter first");
scanf("%d",&m);
printf("enter second");
scanf("%d",&v);
if(m<v){
    e=m;
}
else{
    e=v;
}
for(o=1;o<=e;o++){
    if(m%o==0 & v%o==0){
        
        gcd=o;
    }
  
}

  printf("%d",gcd);

//Q12.LCM
int lcm;
lcm=m*v/gcd;
printf("%d",lcm);


}


    
    








