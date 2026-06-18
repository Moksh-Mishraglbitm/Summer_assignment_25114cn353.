#include<stdio.h>
int main(){
    int n,arr[100];
    printf("enter the range of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);

    }
for(int i=0;i<n;i++){
    int smallest=arr[i];
    int index=i;
    for(int j=i;j<n-1;j++){
    
    if(arr[j+1]<smallest){
    index=j+1;
    smallest=arr[j+1];
    }

}
int temp=arr[i];
arr[i]=arr[index];

arr[index]=temp;

}
for(int k=0;k<n;k++){
    printf("%d",arr[k]); 
}
    
    

}