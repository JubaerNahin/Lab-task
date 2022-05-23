#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,A,B;
    printf("enter the value of first point:");
    scanf("%d %d",&x1,&y1);
    printf("enter the value of second point:");
    scanf("%d %d",&x2,&y2);
    printf("enter the value of third point:");
    scanf("%d %d",&x3,&y3);

    A=(x2-x1)/(y2-y1);
    B=(x3-x2)/(y3-y2);

    if(A==B){
      printf("3 points fall on 1 straight line");
    }
     else{
       printf("does not fall on 1 straight line");
     }
       return 0;
}
