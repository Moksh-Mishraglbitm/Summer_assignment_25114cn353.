#include<stdio.h>

int main(){

int a,s=0;
printf("2+3=?\n1.4\n2.5\n3.6\n");
scanf("%d",&a);
if(a==2)
s++;
printf("4-2=?\n1.2\n2.3\n3.4\n");
scanf("%d",&a);
if(a==1)
s++;
printf("5*2=?\n1.10\n2.8\n3.12\n");
scanf("%d",&a);
if(a==1)
s++;

printf("score=%d",s);

return 0;

}