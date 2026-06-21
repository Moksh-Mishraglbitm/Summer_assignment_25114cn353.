#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int i=0;
    printf("enter the string");
    scanf("%s",&str);
    while(str[i]!='\0'){
        i++;
    }
for(int k=0;k<i;k++){
    str[k]=toupper(str[k]);
}
printf("%s",str);

}
