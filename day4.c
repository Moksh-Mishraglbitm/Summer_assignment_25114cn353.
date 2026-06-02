#include<stdio.h>
int main(){
//Q13.fibonaaci series
    int a,b;
    a=0;
    b=1;
    int c,i,n;
    printf("enter the range of fibonacii");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        
       

    }

//Q14.NTH FIBONAACII NUMBER
    int p,m;
    p=0;
    m=1;
    int q,j,k;
    printf("\nenter the range of fibonacii");
    scanf("%d",&k);
    for(j=0;j<=k;j++){
        q=p+m;
        
        p=m;
        m=q;
        
       

    }
    printf("%d the nth terms is",q);

//Q15.armatrong number check
    int sum=0, arm,g,h,temp;
    printf("enter the number");
    scanf("%d",&g);
    temp=g;
    while(g>0){
        
        h=g%10;
        arm=(h*h*h);
        sum=sum+arm;

        g=g/10;
        

    }

    if(temp==sum){
        printf("its armstrong");}
   
//Q16.PRINT ARMSTRONG OF RANGE
   
        int d=0,f,e,x;
    printf("enterr the range for armstrong");
    scanf("%d",&x);
    for(i=0;i<=x;i++){
        temp=i;
        while(temp>0){
            e=temp%10;
            f=e*e*e;
            d=d+f;
            temp=temp/10;
        }
            if(d==i){
                printf("%d",i);
            }
        
    }
    


    
    

}