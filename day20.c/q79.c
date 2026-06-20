#include<stdio.h>
int main(){
    int arr1[10][10];
    int r,c;
    printf("enter the rows of matrix 1");
    scanf("%d",&r);
    printf("enter the columns of matrix 1");
    scanf("%d",&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
         int sum=0;
   
     for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum=sum+arr1[i][j];
        }
    printf("%d",sum);
}
    }



    