
#include<stdio.h>
int main()
{

  int basic_salary,dearness_allowence,house_rent,gross_salary;
  printf("enter basic_salary:");
  scanf("%d",&basic_salary);
  dearness_allowence=0.4*basic_salary;
  house_rent=0.2*basic_salary;
  gross_salary=basic_salary-dearness_allowence-house_rent;
  printf("Gross salary is:%d",gross_salary);
  return 0;

}
