#include<stdio.h>
int main()
{

	int a,b,addition,substraction,multiply,division,divisible;

	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	addition=a+b;
	substraction=a-b;
	multiply=a*b;
	division=a/b;
	divisible=a%b;

	printf("Addition=%d\nSubstraction=%d\nMultiply=%d\nDivision=%d\nDivisible=%d\n",addition,substraction,multiply,division,divisible);

	return 0;

}