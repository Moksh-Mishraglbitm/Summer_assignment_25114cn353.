#include<stdio.h>
int main(){
    int n,arr[100];
    printf("enter the number of elements sorted");
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int max=0;
    int maxele;
    
    for(int i=0;i<n-1;i++){
        int c=0;
        for(int j=0;j<n-1;j++){
            if(arr[i]==arr[j]){
                c=c+1;
            }
        }
        if(c>max){
            max=c;
            maxele=arr[i];
        }

    }
    printf("%d is the element with maximum frequency",maxele);


}
