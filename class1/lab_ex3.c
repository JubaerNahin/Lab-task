#include <stdio.h>
int main()
{
   int english,bangla,math,physics,chemistry,aggregate,percentage;
   printf("enter the number of english:\n");
   scanf("%d",&english);
   printf("enter the number of bangla:\n");
   scanf("%d",&bangla);
   printf("enter the number of math:\n");
   scanf("%d",&math);
   printf("enter the number of physics:\n");
   scanf("%d",&physics);
   printf("enter the number of chemistry:\n");
   scanf("%d",&chemistry);

   aggregate=english+bangla+math+physics+chemistry;
   percentage=(aggregate*100)/500;
   printf("aggregate is:%d\npercentage is:%d\n",aggregate,percentage);
   return 0;
}
