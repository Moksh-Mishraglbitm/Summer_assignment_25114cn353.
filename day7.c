#include<stdio.h>

//Q25. RECURSIVE FACTORIAL

int fact(int n){
        
        if(n==1){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }

//Q26. RECURSIVE FIBONAACI

int fib(int z){
    if(z==0){
        return 0;
    }
    else if(z==1){
        return 1;
    }
    else{
    
        return fib(z-1)+fib(z-2);
    }
    
}
//Q27. RECURSIVE SUM OF DIGITS

int sum(int m){
    if(m==0){
        return 0;}
    if(m==1){
        return 1;
    }
    else{
        return m%10+sum(m/10);
    
    }

}

//Q28. RECCURSIVE REVERSE OF A NUMBER
int rev(int g,int r){
    
    if(g==0){
        return r;
    }
    else{
        return rev(g/10,r*10+g%10);
    }
}



int main(){
    int b;
printf("enter the number");
scanf("%d",&b);
int c=fact(b);
printf("%d",c);
int e,x;
printf("\nenter the range of fibonaaci");
scanf("%d",&x);
for(int i=0;i<=x;i++){
    printf("%d\n",fib(i));


}
int y;
printf("\nenter the number for sum of digits");
scanf("%d",&y);
int v=sum(y);
printf("%d",v);
int d;
printf("\nenter number to be reversed");
scanf("%d",&d);
int q=rev(d,0);
printf("\n%d",q);



}





