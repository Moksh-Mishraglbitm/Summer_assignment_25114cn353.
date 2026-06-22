#include<stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("enter the string");
    fgets(str,100,stdin);
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    i=0;
    int c=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            c=c+1;
         

        }
           i++;
       

    }
     printf("the number of spaces are %d",c);
    }