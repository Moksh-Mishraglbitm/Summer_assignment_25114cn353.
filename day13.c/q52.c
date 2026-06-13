#include<stdio.h>
int main(){

    int arr[5];
    printf("enter 5 elements");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);    
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    
    int o=0,e=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            e=e+1;
        }
        else{
            o=o+1;
        }
        
    }
printf("\n%d",e);
printf("\n%d",o);
}