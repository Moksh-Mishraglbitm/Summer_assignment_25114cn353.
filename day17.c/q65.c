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
    int k=0,arr3[100];
    for(int i=0;i<n;i++){
        arr3[k]=arr1[i];
        k++;
    }
    for(int i=0;i<p;i++){
        arr3[k]=arr2[i];
        k++;
    }
for(int j=0;j<n+p;j++){
    printf("%d",arr3[j]);
}
   
}