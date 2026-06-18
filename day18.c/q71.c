#include<stdio.h>
int main(){
    int n,arr[100];
    printf("enter the range of array");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);

    }
    int num;
    printf("enter the number yto be searched");
    scanf("%d",&num);
    
    int low=0;
    int high=n-1;
    
    while(low<+high){
        int mid=low+high/2;
        if(arr[mid]==num){
            int found=1;
        }
        else if(num>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    for(int k=0;k<n;k++){
    printf("%d",arr[k]); 
}
}
