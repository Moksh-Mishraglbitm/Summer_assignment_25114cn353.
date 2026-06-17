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
    int i,j;
    for(i=0;i<p;i++){
     int found=0;
    for(int j=0;j<k;j++){
        if(arr2[i]==arr3[j]){
            found=1;
            break;
        }
    }
     if(found==1){
            arr3[k]=arr2[i];
            k++;
     }
    for(int o=0;o<k;o++){
    printf("%d ",arr3[o]);
}


}
}