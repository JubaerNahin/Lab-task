#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    printf("Enter the limit number to check prime numbers within:");
    scanf("%d",&n);
    printf("Prime numbers from 1 to 300's are given below:\n2 ");
    for(i=3;i<n;i+=2){
        int flag=1;
        for(j=3;j<= sqrt(i);j+=2){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d ",i);
        }
    }

    return 0;
}
