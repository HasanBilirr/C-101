#include <stdio.h>
#include <stdlib.h>
int main()
{
 int numbers [3];
 int i ;
 for(i=0;i<3;i++){
    scanf("%d",&numbers[i]);
 }   
 printf("elamants of array=");
 for(i=0;i<3;i++){
    printf("%    d",numbers[i]);
 }


 return 0;
}
