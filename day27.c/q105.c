#include<stdio.h>
struct student{
    char name[50];
    int roll;
    int marks;
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
            printf("enter marks");
            scanf("%d",&s.marks);
            break;
            case 2:
            printf("%s",s.name);
            printf("%d",s.roll);
            printf("%d",s.marks);
            break;

            case 3:
            printf("none");
            break;
            default:
            printf("invalid choice");        }



    
}