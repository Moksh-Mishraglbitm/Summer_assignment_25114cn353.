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
     printf("enter second matrix");
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int arr3[10][10];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
    
}
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr3[i][j]);
        }

}
}
