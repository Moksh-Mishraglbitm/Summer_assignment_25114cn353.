#include<stdio.h>
int main(){
    printf("WELCOME TO CALCI\n");
    int n;
    printf("enter choice \n 1.add \n 2. subtract \n 3.divide \n 4. multiply\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        int a,b;
        printf("enter two numbers");
        scanf("%d %d",&a,&b);
        printf("%d",a+b);
        break;

        case 2:
        int c,d;
        printf("enter two numbers");
        scanf("%d %d",&c,&d);
        printf("%d",c-d);
        break;

        case 3:
        int e,f;
        printf("enter two numbers");
        scanf("%d %d",&e,&f);
        printf("%d",e/f);
        break;

        case 4:
        int g,h;
        printf("enter two numbers");
        scanf("%d %d",&g,&h);
        printf("%d",g*h);
        

        break;
        default:
        printf("invalid choice");

    }
    return 0;
}