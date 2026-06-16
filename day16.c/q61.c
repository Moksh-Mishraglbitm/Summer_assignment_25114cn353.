#include<stdio.h>
int main(){
    int n,arr[100];
    printf("enter the number of elements sorted");
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]!=1){
            printf("the missing element is %d",1+arr[i]);
        }
    }

}