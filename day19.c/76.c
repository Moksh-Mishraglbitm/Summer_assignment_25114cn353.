#include<stdio.h>
int main(){
    int r,c;
    printf("enter the rows and columns");
    scanf("%d %d",&r,&c);
    printf("enter first matrix");
    int arr1[10][10],arr2[10][10];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    int sum=0;
      for(int i=0;i<r;i++){
        
            sum=sum+arr1[i][i];
        
    }
    printf("%d",sum);




}