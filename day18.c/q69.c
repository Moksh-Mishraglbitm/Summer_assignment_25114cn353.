#include<stdio.h>
int main(){
    int n,arr[100];
    printf("enter the range of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);

    }
    
for(int i=0;i<n;i++){
   
    for(int j=0;j<n-1;j++){
       
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(int k=0;k<n;k++){
    printf("%d",arr[k]); 
}

}