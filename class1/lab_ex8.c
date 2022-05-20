#include<stdio.h>
int main()
{
   int number,a,a1,b,b1,c,c1,d,d1,e,e1,sum;
   printf("Enter the 5 digit number:");
   scanf("%d",&number);
   a=number/10;
   a1=number%10;
   b=a/10;
   b1=a%10;
   c=b/10;
   c1=b%10;
   d=c/10;
   d1=c%10;
   e=d/10;
   e1=d%10;

   printf("reverse of the 5 digit number is=%d%d%d%d%d",a1,b1,c1,d1,e1);

   return 0;
}
