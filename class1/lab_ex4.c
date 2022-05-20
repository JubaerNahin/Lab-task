#include<stdio.h>
int main()
{
  float F,C;
  
  printf("enter the temperature in fahrenheit:");
  scanf("%f",&F);
  C=(5.0/9.0)*(F-32);
  printf("the temperature into centigrade is:%.2f",C);
  return 0;
}
