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
    int max=arr[0];
    
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }

        }
        printf("\n%d",max);
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }

        }
        printf("\n%d",min);




    }
