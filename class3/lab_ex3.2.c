#include <stdio.h>

int main() {
    int i,fact=1,num;
    printf("enter the number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
      printf("fact value of %d is:%d\n",num,fact);
    
}