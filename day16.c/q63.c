#include<stdio.h>
int main(){
    int n,arr[100];
    printf("enter the number of elements sorted");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    printf("enter the sum to be found");
    scanf("%d",&sum);
     for(int i=0;i<n-1;i++){
        
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d %d",arr[i],arr[j]);
            }
        }
    }
}