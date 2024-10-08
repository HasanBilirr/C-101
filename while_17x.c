#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i=0 ; 
 int a ;
 int line=0 ;
 printf("enter a number for limit,please\n");
 scanf("%d",&a);  
  while(i<=a){
  printf("%5d",i);
    i=i+17;
    line++ ;
    if (line%10==0){
        printf("\n");
    }
 }
  return 0;
}