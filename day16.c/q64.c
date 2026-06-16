#include<stdio.h>
int main(){
    int n,arr[100];
    printf("enter the number of elements sorted");
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    
    
    for(int i=0;i<n-1;i++){
        
        for(int j=0;j<n-1;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
                
            }
        }
    }}