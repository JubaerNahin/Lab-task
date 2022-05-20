#include<stdio.h>
int main()
{
  float km,meter,feet,inch,cm;
  printf("enter distance:");
  scanf("%f",&km);
  meter=km*1000;
  feet=km*3280.8399;
  inch=km*39370.078;
  cm=km*100000;
  printf("In meter=%.2f\nIn feet=%.2f\nIn inch=%.2f\nIn cm=%.2f\n",meter,feet,inch,cm);
  return 0;

}
