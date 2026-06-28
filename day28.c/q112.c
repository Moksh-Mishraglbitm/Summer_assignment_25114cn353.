#include<stdio.h>

struct contact{
char name[50];
char phone[15];
};

int main(){

struct contact c;
int ch;

printf("1.Add Contact\n2.Display Contact\n3.Exit\n");
scanf("%d",&ch);

switch(ch){

case 1:
printf("Enter Name: ");
scanf("%s",c.name);

printf("Enter Phone Number: ");
scanf("%s",c.phone);

printf("Contact Saved");
break;

case 2:
printf("Name: %s\n",c.name);
printf("Phone: %s\n",c.phone);
break;

case 3:
printf("Exiting...");
break;

default:
printf("Invalid Choice");

}

return 0;
}