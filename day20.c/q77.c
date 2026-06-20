#include<stdio.h>
int main(){
    int arr1[10][10];
    int r,c,r1,r2,c2,arr2[10][10];
    printf("enter the rows of matrix 1");
    scanf("%d",&r);
    printf("enter the columns of matrix 1");
    scanf("%d",&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
     
    printf("enter the rows of matrix 2");
    scanf("%d",&r2);
    printf("enter the columns of matrix 2");
    scanf("%d",&c2);
    
    
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int sum=0,arr3[10][10], k;
    if(c==r2){
        for(int i=0;i<r;i++){
            for(int j=0;j<c2;j++){
                sum=0;
                for(k=0;k<r2;k++){
                    sum=sum+arr1[i][k]*arr2[k][j];
                    arr3[i][j]=sum;
                    

                    
                }
            }


        }

       

    }
    for(int i=0;i<r;i++){
            for(int j=0;j<c2;j++){
                printf("%d ",arr3[i][j]);
            }
        }
    
    




    


}