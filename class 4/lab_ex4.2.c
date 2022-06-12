#include<stdio.h>
int main()
{
    int choice,a,b,add,sub,mul,divi;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("1:Addition\n");
    printf("2:Substraction:\n");
    printf("3:Multiplication:\n");
    printf("4:Division:\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
               add=a+b;
               printf("Addition is:%d",add);
               break;
        case 2:
               sub=a-b;
               printf("Substraction is:%d",sub);
               break;
        case 3:
               mul=a*b;
               printf("Multiplication is:%d");
               break;
        case 4:
               divi=a/b;
               printf("Division is:%d");
               break;
        default:
                printf("No case");


    }

    return 0;
}
