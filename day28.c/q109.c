#include<stdio.h>
struct book{
    int booknum;
    char bookname[50];
    int bookprice;
    char issuemonth[20];
    
};

int main(){
    struct book b;
    printf("welcome to the library \n");
    int n;
    printf("enter choice\n 1.issue book \n 2.exit");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("enter the num of book");
        scanf("%d",&b.booknum);
        printf("\nenter the book name");
        scanf("%s",b.bookname);
        printf("enter the price");
        scanf("%d",&b.bookprice);
        printf("\nto pay %d",b.bookprice);
        printf("enter the month");
        scanf("%s",b.issuemonth);
        printf("youissued in %s",b.issuemonth);
        break;

        case 2:
        printf("exiting...");
        break;

        default:
        printf("invalid choice");



    }

}

