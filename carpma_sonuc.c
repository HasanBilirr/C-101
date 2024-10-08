#include <stdio.h>
#include <stdlib.h>
int main()
{
int a ;
int b ;    
printf("entire 2 numbers,please\n");
scanf("%d%d",&a,&b);

if (a>0 && b>0){
    printf("the result of this multiplication is positive");
}
else if (a<0 && b<0){
    printf("the result of multiplication is positive");
}
else if (a==0 || b==0){
    printf("the result of multiplication is zero");
}
else {
    printf("the result of multiplication is negative");
}
    
  return 0;
}