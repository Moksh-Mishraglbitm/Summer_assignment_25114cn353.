#include<stdio.h>
int fibonaaci(int f){
   int a=0;
   int b=1;
   printf("%d%d",a,b);
   int c;
   for(int j=2;j<=f;j++){
     c=a+b;
     printf("%d",c);

    a=b;
    b=c;
     
   }
  
}




int main(){
    int m;
    printf("enter the rage of fibonaaci");
    scanf("%d",&m);
    fibonaaci(m);

}