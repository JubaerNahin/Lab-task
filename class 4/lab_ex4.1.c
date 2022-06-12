#include<stdio.h>
#include<math.h>
int main()
{

	int choice,i,fact=1,num,n,flag=0;
    printf("Choices are as below\n");
    printf("1:Factorial\t");
    printf("2:Prime\t\t");
    printf("3:Odd/Even\t");
    printf("4:Exit\n");
   	printf("Enter choice ");
  	scanf("%d",&choice);

	switch(choice)
	{

		case 1:

                printf("Enter a number: ");
                scanf("%d",&num);
                for(i=1;i<=num;i++){
                    fact=fact*i;
                }
                    printf("Factorial of %d is: %d",num,fact);
        		break;

		case 2:

        		printf("Enter any positive number:");
                scanf("%d",&n);
                if(n%2==0&&n!=2||n==1){
                            printf("Not prime");
                }
                else{
                      for(int i=3;i<=sqrt(n);i+=2){
                               if(n%i==0){
                               flag=1;
                               break;
                             }
                    }
                     if(flag==0){
                            printf("prime number");
                        }
                     else{
                        printf("Not prime");
                    }

                }
                break;

	case 3:
         	printf("Enter a number: ");
            scanf("%d",&num);
            if(num%2==0){
            	printf("even number");
        	}
        	else{
		      		printf("odd number");
        	}

        	break;

	default:

        	 printf("No case");
  }
          return 0;
}


