#include<stdio.h>
int main(){

    //Q29.HALF PYRAMID PATTERN

int i,n,k;
printf("enter the range of pyramid");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf(" ");
    for(k=0;k<i;k++){
        printf("*");
    }
printf("\n");
}
printf("\n");

//Q30. NUMBER TRIANGLE

int y,l;
for(y=1;y<7;y++){
    printf(" ");
    for(l=1;l<y;l++){
        printf("%d",l);
    }
printf("\n");
}

//Q.31. ALPHABET PATTERN

int o,p;
for(o=1;o<7;o++){
    printf(" ");
    for(p=0;p<o;p++){
        printf("%c",'a'+p);
    }
printf("\n");
}

//Q32. REPEATED NUMBER PATTERN

int q,w;
for(q=1;q<=n;q++){
    for(w=1;w<=q;w++){
        printf("%d",q);
    }
    printf("\n");
}







}