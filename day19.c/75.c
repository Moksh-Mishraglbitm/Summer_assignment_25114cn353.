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
     

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr2[i][j]=arr1[j][i];
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");


}
}
