#include <stdio.h>
#include <stdlib.h>
int main()
{
int x,i ;
int result ;
printf("enter a number, please\n");
scanf("%d",&x);
result=0;
i=0;
while(i<=x){
   if(i<x){
    printf("%1d +",i);
   }
   else if (i==x){
    printf("%1d",i);
   }
     result=result+i;
    i ++ ;
}
   printf("\nresult=%d",result);
  return 0;
}