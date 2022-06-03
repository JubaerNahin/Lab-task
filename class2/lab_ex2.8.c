#include <stdio.h>
int main()
{
    int a,b,c,h,area, perimeter;
    printf("enter the side of triangle 'a':");
    scanf("%d",&a);
    printf("enter the other side of triangle 'b':");
    scanf("%d",&b);
    printf("enter the base of triangle 'c':");
    scanf("%d",&c);
    printf("enter the height of triangle 'h':");
    scanf("%d",&h);
    area=(b*h)/2;
    perimeter=a+b+c;
    if(area>perimeter){
      printf("area is greater than perimeter of the triangle");
    }
      else{
        printf("area is not greater than perimeter of the triangle");
      }
}
