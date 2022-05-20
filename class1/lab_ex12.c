#include<stdio.h>
int main()
{
   int total_selling,total_profit,cost_price;
   double cost_per_item;

   printf("Total selling of 15 item:");
   scanf("%d",&total_selling);
   printf("Total profit:");
   scanf("%d",&total_profit);
   cost_price=total_selling-total_profit;
   cost_per_item=cost_price/15;
   printf("Cost ofthe one item:%.3lf",cost_per_item);

   return 0;
}
