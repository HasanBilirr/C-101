#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,n,x ;
float result ;
char again ;
do{
printf("enter 2 number for n and x\n");
scanf("%d%d",&n,&x);
printf("n=%d\nx=%d\n",n,x);

for(i=1;i<= 2*n-1;i+=2){
    
    result+= i/pow(x,i+1);
}
  printf("result=%f\n",result);
  printf("can you lets again\n");
  scanf(" %c",&again);
}
while((again=='E')||(again=='e'));
    printf("good bye\n");

  return 0;
}