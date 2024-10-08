#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c ;
printf("enter a numbers for A,please\n");
scanf("%d",&a);
printf("enter a number for B,please\n");
scanf("%d",&b);
 c=a;
 a=b;
 b=c;
 printf("A number =%d\n",a);
 printf("B number =%d",b);
  
  return 0;
}