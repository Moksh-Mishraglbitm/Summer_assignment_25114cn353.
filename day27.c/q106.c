#include<stdio.h>
struct employe{
    char name[50];
    int id;
    int salary;
};
int main(){
        struct employe s;
        int ch;
        printf("enter choice:");
        printf("1.add\n2.display\n3.exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter name");
            scanf("%s",s.name);
            printf("enter id number");
            scanf("%d",&s.id);
            printf("enter salary");
            scanf("%d",&s.salary);
            break;
            case 2:
            printf("%s",s.name);
            printf("%d",s.id);
            printf("%d",s.salary);
            break;

            case 3:
            printf("none");
            break;
            default:
            printf("invalid choice");        }



    
}