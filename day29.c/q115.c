#include<stdio.h>
#include<string.h>

int main(){
char s1[100],s2[100];
int n;

printf("1.length\n2.copy\n3.concat\n");
scanf("%d",&n);

switch(n){

case 1:
printf("enter string");
scanf("%s",s1);
printf("%d",strlen(s1));
break;

case 2:
printf("enter string");
scanf("%s",s1);
strcpy(s2,s1);
printf("%s",s2);
break;

case 3:
printf("enter first string");
scanf("%s",s1);
printf("enter second string");
scanf("%s",s2);
strcat(s1,s2);
printf("%s",s1);
break;

default:
printf("invalid");

}

}