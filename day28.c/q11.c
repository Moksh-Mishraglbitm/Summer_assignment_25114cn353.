#include<stdio.h>

struct ticket{
    char name[50];
    int seats;
    int price;
};

int main(){

struct ticket t;
int ch;

printf("1.Book Ticket\n2.Exit\n");
scanf("%d",&ch);

switch(ch){

case 1:
printf("Enter Name: ");
scanf("%s",t.name);

printf("Enter No of Seats: ");
scanf("%d",&t.seats);

t.price=t.seats*200;

printf("\nTicket Booked\n");
printf("Name: %s\n",t.name);
printf("Seats: %d\n",t.seats);
printf("Total Price: %d\n",t.price);
break;

case 2:
printf("Exiting...");
break;

default:
printf("Invalid Choice");

}

return 0;
}