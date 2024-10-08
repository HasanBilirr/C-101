#include <stdio.h>
#include <stdlib.h>
int main()
// f(x) = 1/1 +1/2 +1/n
{
int n ;
float i ;
float result ;
printf("enter a number\n");
scanf("%d",&n);

for(i=1;i<=n;i++){
  result=result+ 1/i ;
}
 printf("the operation's result =%.3f",result);

  return 0;
}