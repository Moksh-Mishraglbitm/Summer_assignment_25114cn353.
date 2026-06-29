#include<stdio.h>
int main(){
    printf("welcome");
    printf("enter the choice \n 1.array input\n 2.array addition\n 3. array subtraction\n 4.exit\n");
    int n;
    scanf("%d",&n);
    int arr[100];
    switch(n){
        
        case 1:
        printf("enter the range of array");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d\n",&arr[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
        break;
        case 2:
        int arr2[100],arr1[100],arr3[100]; 
          printf("enter the range of array1");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d\n",&arr1[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d",arr1[i]);
        }
          printf("enter the range of array2");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d\n",&arr2[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d",arr2[i]);
        }
       
        for(int i=0;i<n;i++){
            
            arr3[i]=arr1[i]+arr2[i];
        }
        for(int i=0;i<n;i++){
            printf("%d",arr3[i]);
        }
        break;

        case 3:
        int arr2[100],arr1[100],arr3[100]; 
          printf("enter the range of array1");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d\n",&arr1[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d",arr1[i]);
        }
          printf("enter the range of array2");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d\n",&arr2[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d",arr2[i]);
        }
       
        for(int i=0;i<n;i++){
            
            arr3[i]=arr1[i]-arr2[i];
        }
        for(int i=0;i<n;i++){
            printf("%d",arr3[i]);
        }
        case 4:
        printf("exiting");
        default:
        printf("invalid choice");






    }
}