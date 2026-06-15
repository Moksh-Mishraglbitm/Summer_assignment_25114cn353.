#include<stdio.h>
int main(){
       int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    int i;
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int pos=0;
    for (int i = 0; i < n; i++){
        if(arr[i]!=0){
            arr[pos]=arr[i];
            pos++;
        }
    
        
  
    while(pos<n){
       arr[pos]=0;
       pos++;
        }
       
          printf("\n");
    for (int j = 0; j < n; j++){
        printf("%d ", arr[j]);
       
    }
    
        


    }}