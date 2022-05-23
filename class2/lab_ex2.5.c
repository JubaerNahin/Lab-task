#include<stdio.h>
int main()
{
    int arif,fahmid,joy;
    printf("enter the age of arif:");
    scanf("%d",&arif);
    printf("enter the age of fahmid:");
    scanf("%d",&fahmid);
    printf("enter the age of joy:");
    scanf("%d",&joy);
    if(arif<fahmid && arif<joy){
        printf("arif is the youngest");
    }
      if(fahmid<arif && fahmid<joy){
        printf("fahmid is the youngest");
    }
      if(joy<arif && joy<fahmid){
        printf("joy is the youngest");
      }

    return 0;
}
