#include<stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("enter the string");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    int start=0;
    int end=i-1;
    char org[100];
    strcpy(org,str);
    while(str[start]<str[end]){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
    }
    if(strcmp(str,org)==0){
        printf("its a pllindrome");
    }
    

}
