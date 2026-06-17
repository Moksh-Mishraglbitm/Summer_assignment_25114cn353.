#include<stdio.h>
int main(){
    int n, arr1[100];
    printf("enter the number of elements i array1");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
      int p,arr2[100];
    printf("enter the number of elements i array1");
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                printf("%d is the common element",arr1[i]);
            }
        }
    }
}