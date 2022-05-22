#include<stdio.h>
int main()
{
	double a,b,addition,substraction,multiply,division;
	
	printf("Enter the value of a:");
	scanf("%lf",&a);
	printf("Enter the value of b:");
	scanf("%lf",&b);
	addition=a+b;
	substraction=a-b;
	multiply=a*b;
	division=a/b;
		
	printf("Value of Addition=%.4lf\n",addition);
	printf("Value of Substraction=%.4lf\n",substraction);
	printf("Value of Multiplication=%.4lf\n",multiply);
	printf("Value of Division=%.4lf\n",division);

        return 0;
	
}
