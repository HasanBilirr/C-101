#include <stdio.h>
#include <stdlib.h>
#define tavhiz 0.038
#define kushiz 0.012
int main()
{
float rabbit=1042 , bird=2272 ;
int year = 0;
while(rabbit<bird){
  rabbit=rabbit+rabbit*tavhiz ;
  bird=bird+bird*kushiz ;
  year++ ;
  printf("%d.year : rabbit=%d  bird=%d\n",year,(int)rabbit,(int)bird);  
}
printf("number of rabbits pass number of birds when year is %d",year);
  return 0;
}