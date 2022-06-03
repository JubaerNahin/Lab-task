#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>79){
        printf("A+");
    }
    else if(num>74){
        printf("A");
    }
    else if(num>69){
        printf("A-");
    }
    else if(num>64){
        printf("B+");
    }
    else if(num>59){
        printf("B");
    }
    else if(num>54){
        printf("B-");
    }
    else if(num>49){
        printf("C+");
    }
    else if(num>44){
        printf("C");
    }
    else if(num>39){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}