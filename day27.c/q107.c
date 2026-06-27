#include<stdio.h>

struct employee{
char name[50];
float basic,gross;
};

int main(){

struct employee e;
int ch;

printf("1.add\n2.display\n");
scanf("%d",&ch);

switch(ch){

case 1:
printf("enter name:");
scanf("%s",e.name);

printf("enter basic salary:");
scanf("%f",&e.basic);

e.gross=e.basic+(e.basic*20/100)+(e.basic*10/100);

printf("gross salary = %.2f",e.gross);
break;

case 2:
printf("%s\n",e.name);
printf("%.2f\n",e.basic);
printf("%.2f",e.gross);
break;

default:
printf("invalid");
}

}