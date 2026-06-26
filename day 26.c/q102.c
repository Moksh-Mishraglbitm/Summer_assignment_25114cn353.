#include<stdio.h>
#include<string.h>
int main(){
    printf("enter your age");
    int n;
    scanf("%d",&n);
    if(n<18){
        printf("not elegible");
    }
    else{
        printf("indian citezan?(y/n)");
        char ans;
        scanf(" %c",&ans);
        if(ans=='n'){
            printf("not elegible");

        }
        else{
            printf("you have voting id?(y/n)");
            char s;
            scanf(" %c",&s);
            if(s=='n'){
                printf("not elegible");
            }
            else{
                printf("eligible");
            }
        }
    }
}