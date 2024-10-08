#include <stdio.h>
#include <stdlib.h>
int main()
{
int a ;    
 printf("enter 1 number , please \n");
 scanf("%d",&a);
 printf("\n");
 while (0<a)
 {
    printf("%2d",a);
    a-=1;
 }
  return 0;
}