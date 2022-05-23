#include<stdio.h>
int main()
{
    int Angle_A,Angle_B,Angle_C,sum;
    printf("enter the angle of A:");
    scanf("%d",&Angle_A);
    printf("enter the angle of B:");
    scanf("%d",&Angle_B);
    printf("enter the angle of C:");
    scanf("%d",&Angle_C);
    sum=Angle_A+Angle_B+Angle_C;

    if(sum==180){
        printf("the triangle is valid");
    }
      else{
        printf("the triangle is not valid");
      }

    return 0;
}