#include<stdio.h>
struct bank{
    char name[50];
    int bankid;
    float balance;

};
int main(){
    struct bank b;
    int n;
    printf("enter the choice\n 1.widhraw \n 2. deposit \n 3. exit");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("enter your name");
        scanf("%s",b.name);
        printf("\nenter the bank id");
        scanf("%d",&b.bankid);
        printf("\nenter the total balance");
        scanf("%d",b.balance);
        printf("\n enter balance to be widrawn");
        int amt;
        scanf("%d",&amt);
        b.balance=b.balance-amt;
        printf("remaining balance is %d",b.balance);
        break;
        case 2:
        printf("enter your name");
        scanf("%s",b.name);
        printf("\nenter the bank id");
        scanf("%d",&b.bankid);
        printf("\nenter the total balance");
        scanf("%d",b.balance);
        printf("\n enter balance to be deposited");
        int amt;
        scanf("%d",&amt);
        b.balance=b.balance+amt;
        printf("remaining balance is %d",b.balance);
        break;
        case 3:
        printf("exiting....");
        break;
        default:
        printf("invalid choice");


    }
    
}