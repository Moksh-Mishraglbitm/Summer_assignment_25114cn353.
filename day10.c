#include<stdio.h>
int main(){
//Q.37 STAR PYRAMID PATTERN

    int i,z,n,k;
printf("enter the range of pyramid");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf(" ");
    for(k=n;k>i;k--){
        printf(" ");
    }
        for(z=0;z<i;z++){
            printf("* ");
        }
printf("\n");
}

//Q38. REVERSE PYRAMID

int u,j,l,h;
printf("enter the range of pyramid");
scanf("%d",&j);
for(l=j;l>0;l--){
    printf(" ");
    for(h=j;h>l;h--){
        printf(" ");
    }
        for(u=0;u<l;u++){
            printf("* ");
        }
printf("\n");
}











//Q.39. NUMBER PYRAMID


int s,p,o;
for(s=0;s<6;s++){
    printf(" ");
    for(p=6;p>s;p--){
        printf(" ");
    }
        for(o=0;o<s;o++){
            printf("%d ",o);
        }
printf("\n");


}

//Q40. CHARACTER PYRAMID


int g,a,c,r;
for(a=0;a<6;a++){
    printf(" ");
    for(c=6;c>a;c--){
        printf(" ");
    }
        for(r=0;r<a;r++){
            printf("%c",'A'+r);
            for(g=a-1;g>=0;g--){
                printf("%c",'A'+g);
            }
        }
printf("\n");


}



}

