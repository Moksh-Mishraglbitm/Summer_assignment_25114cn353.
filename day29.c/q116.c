#include<stdio.h>

struct inventory{
        char name[50];
        int price;
        int id;

    };


int main(){
    struct inventory i;{
        int n;
        printf("enter the choice \n 1.add item \n 2. display item \n 3.exit \n");
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("enter the name");
            scanf("%s",i.name);
            printf("enter the price");
            scanf("%d",&i.price);
            printf("enter the id");
            scanf("%d",&i.id);
            break;

            case 2:
            printf("%s\n",i.name);
            printf("%d\n",i.price);
            printf("%d\n",i.id);
            break;

            case 3:
            printf("exiting....");

            default:
            printf("invalid choice");
        }
        
    }
}