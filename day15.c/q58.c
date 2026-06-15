#include<stdio.h>
int main(){
       int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    int i;
    printf("Enter %d integers:\n", n);
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
         int temp=arr[0];
    for(int i=0;i<n-1;i++){
       
        arr[i]=arr[i+1];
        }
         arr[n-1]=temp;

   
   
     printf("\n");
    for (int j = 0; j < n; j++)
        printf("%d ", arr[j]);




}