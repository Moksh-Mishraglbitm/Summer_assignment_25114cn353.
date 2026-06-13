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

    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("/n%d",sum);
    int avg=sum/5;
    printf("\n%d",avg);




}

