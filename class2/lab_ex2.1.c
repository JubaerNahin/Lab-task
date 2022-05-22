#include<stdio.h>
int main()
{
	int cost_price,selling_price,profit,loss;
	printf("Enter the cost price:");
	scanf("%d",&cost_price);
	printf("enter the selling price:");
	scanf("%d",&selling_price);
	if(selling_price>cost_price){
        profit=selling_price-cost_price;
        printf("Seller has made a profit of %d",profit);
	}
	  else{
        loss=cost_price-selling_price;
        printf("Seller has made a loss of %d",loss);
	  }

	return 0;
}