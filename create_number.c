#include <stdio.h>
#include <stdlib.h>

int create(int x,int y,int z){
    return((100*x)+(10*y)+(z)) ;
}

int main()
{
int x,y,z ;
printf("enter only one digit 3 numbers for creating 3 digits number\n");
scanf("%d%d%d",&x,&y,&z);
printf("created this number by your entered numbers = %d",create(x,y,z));
  return 0;
}