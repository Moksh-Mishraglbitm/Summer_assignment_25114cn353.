#include<stdio.h>
int main(){
//Q17.perfect number
    int n,i,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++){
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n){
        printf("its a perfect number");
    }
    else{
        printf("not a perfect number");

    }
//Q18.to check strong number
int org,v,p,fact=1,temp=0,j;
printf("enter the number");
scanf("%d",&p);
org=p;
while(p>0){
    v=p%10;
    fact=1;
    for(j=1;j<=v;j++){
        
        fact=fact*j;
    }
    temp=temp+fact;
    p=p/10;
}
if(temp==org){
    printf("its a strong number");
}
else{
    printf("not a strong number");

}
//Q19.factors of a number
int largest=0,f,k,m=0,x,l;
printf("enter the number");
scanf("%d",&f);
for(x=1;x<=f;x++){
    if(f%x==0){
        printf("%d\n",x);
//Q20.largest prime factor   
        m=0;
        for(k=1;k<=x;k++){
            
            if(x%k==0){
            m=m+1;
           }
            }
            if(m==2){
                largest=x;
            }

        }

}
printf("\n%dlargest prime factor",largest);
    
  }
