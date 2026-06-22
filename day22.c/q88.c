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
    char newstr[100];
    i=0;
    int j=0;
    int c=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
            newstr[j]=str[i];
            j++;

        }
        i++;

    }
    newstr[j]='\0';
    printf("%s",newstr);

    }
     