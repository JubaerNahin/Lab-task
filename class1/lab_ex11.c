#include<stdio.h>
int main()
{
   int N,note10,note50,note100;
   printf("enter the ammount:");
   scanf("%d",&N);

   note100=N/100;
   N=N%100;

   note50=N/50;
   N=N%50;

   note10=N/10;

   
   printf("Total number of 100 currency notes:%d\n",note100);
   printf("Total number of 50 currency notes:%d\n",note50);
   printf("Total number of 10 currency notes:%d\n",note10);

   return 0;
}
