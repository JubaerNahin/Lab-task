#include<stdio.h>
int main()
{
	int N;
    printf("Enter the year:");
    scanf("%d",&N);
    if(N%4==0 && N%100!=0 || N%400==0){
        printf("The year is leap year");
    }
     else {
        printf("The year is not leap year");
     }
      return 0;
}
