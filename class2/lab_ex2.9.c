#include <stdio.h>
int main()
{
   char N;
   scanf("%c",&N);
   if(N>=65 && N<=90){
     printf("a capital letter");
   }
    if(N>=97 && N<=122){
      printf("a small case");
    } 
     if(N>=48 && N<=57){
       printf("a digit");
     } 
       if(N>=0 && N<=47 || N>=58 && N<=64 || N>=91 && N<=96 || N>=123 && N<=127){
         printf("a special symbol");
       }
    return 0;   
}
