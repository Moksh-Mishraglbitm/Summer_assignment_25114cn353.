#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("enter the number between 1 and 10\n");
    printf("you only have three chances\n");
    srand(time(0));
    int num=(rand()%10);
    int n;
    for(int i=0;i<=3;i++){
        printf("enter the guess");
        scanf("%d",&n);
        if(n==num){
            printf("correct");
        }
        
        else{
            printf("better luck next time");
        }
    }
}