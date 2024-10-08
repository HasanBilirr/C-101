#include <stdio.h>
#include <stdlib.h>
int main()
{
int time ;
float price=0.25 ;
float top_price ;
printf("Enter the time which you spent talking on your phone\n");
scanf("%d",&time);
if(time<=3){
    printf("your wage=%.3f",price);
}
else if(time>3){
    printf("your wage=%.3f",((time-3)*0.08)+0.25);
}

  return 0;
}