#include<stdio.h>
int main(){
    
 //Q33. REVERSE STAR PATTERN   
    int k,i,n;
    printf("enter the range of pyramid");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        printf(" ");
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }

    
    //Q34. REVERSE NUMBER PATTEREN
    
    int y,u,m;
   
    for(y=6;y>=1;y--){
        printf(" ");
        for(m=1;m<=y;m++){
            printf("%d",m);
        }
        printf("\n");
    }

    //Q35. REPEATED CHARACTER PATTERN
   
    int o,b;
   
    for(o=0;o<=6;o++){
        printf(" ");
        for(b=0;b<=o;b++){
            printf("%c",'A'+o);
        }
        printf("\n");
    }

//Q36. HOLLOW SQUARE PATTERN 
    
    int j,l;
   
    for(l=1;l<=6;l++){
        printf(" ");
        for(j=1;j<=6;j++){
           if(l==1||l==6||j==1||j==6){
            printf("*");
           }
            else{
                printf(" ");
            }
           
        }
        printf("\n");
    }
    


        
        
        
}