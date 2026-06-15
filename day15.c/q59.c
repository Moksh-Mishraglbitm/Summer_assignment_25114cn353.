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
         int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
       
        arr[i]=arr[i-1];
        }
         arr[0]=temp;

   
   
     printf("\n");
    for (int j = 0; j < n; j++)
        printf("%d ", arr[j]);




}