#include<stdio.h>
int main()
{
   double population=80000,total_literacy,man_population,woman_population,man_literacy,woman_literacy,man_illiteracy,woman_illiteracy;
   man_population=population*0.52;
   man_literacy=population*0.35;
   total_literacy=population*0.48;
   woman_literacy=total_literacy-man_literacy;
   man_illiteracy=man_population-man_literacy;
   woman_illiteracy=population-(man_population+woman_literacy);

   printf("Total number of illiterate man is:%lf\n",man_illiteracy);
   printf("Total number of illiterate woman is:%lf\n",woman_illiteracy);

   return 0;
}
