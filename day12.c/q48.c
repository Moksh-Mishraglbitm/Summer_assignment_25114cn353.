#include<stdio.h>

int perfect(int n){
    int sum=0;
    int temp=n;
    
        int j;
        
        for(j=1;j<temp;j++){
            if(temp%j==0){
                sum=sum+j;
            }
        }
        
    
    if(temp==sum){
        return(printf("its a perfect number"));
    }

}



int main(){
    int p;
    printf("enter the number");
    scanf("%d",&p);
    perfect(p);


}