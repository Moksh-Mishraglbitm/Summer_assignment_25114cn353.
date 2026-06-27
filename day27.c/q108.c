#include<stdio.h>
struct student{
    char name[50];
    int roll;
    int m1,m2,total,m3;
    float per;
};
int main(){
        struct student s;
        int ch;
        printf("enter choice:");
        printf("1.add\n2.display\n3.exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter name");
            scanf("%s",s.name);
            printf("enter rpll number");
            scanf("%d",&s.roll);
            printf("enter marks of 3 subjects");
            scanf("%d%d%d",&s.m1,&s.m2,&s.m3);
            s.total=s.m1+s.m2+s.m3;
            s.per=s.total/3;
            printf("%d",s.per);
            break;
            case 2:
            printf("%s",s.name);
            printf("%d",s.roll);
            printf("%d %d %d",s.m1,s.m2,s.m3);
            printf("%d",s.per);
            break;

            case 3:
            printf("none");
            break;
            default:
            printf("invalid choice");        }



    
}