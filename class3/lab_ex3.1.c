#include<stdio.h>
int main()
{
    int i,work_time,overtime_pay;
    for(i=1;i<=10;4i++){
        printf("enter the working time of the employee:\n");
        scanf("%d",&work_time);
        if(work_time>40){
            overtime_pay=(work_time-40)*12;
            printf("overtime payment is:%d\n",overtime_pay);
        }
        else{
            printf("the employee has no overtime payment\n");
        }
    }
    return 0;
}
