#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("enter the string");
    scanf("%s",&str);
    while(str[i]!='\0'){
        i++;
    }
   int start=0;
   int end=i-1;
   while(start<end){
    char temp;
    str[start]=temp;
    str[end]=str[start];
    temp=str[end];
    start++;
    end--;
   }
   printf("%s",str);

    



}
