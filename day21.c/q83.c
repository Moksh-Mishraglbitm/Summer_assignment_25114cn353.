#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("enter the string");
    scanf("%s",&str);
    while(str[i]!='\0'){
        i++;
    }
    int c=0;
    printf("%s",str);
    printf("length is %d",i);
    for(int k=0;k<i;k++){
        if(str[k]=='a'||str[k]=='e'||str[k]=='i'||str[k]=='o'||str[k]=='u'){
            c=c+1;
        }
    }
    printf("\n%d",c);

    



}
