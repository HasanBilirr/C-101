#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// float kok (float x){
//   return float karekok = sqrt(sayi);
// }



int main()
{
float x ;
printf("enter a number\n");
scanf("%f",&x);

if(x>=0){
    float karakok = sqrt(x);
    printf("karakok=%.2f\n",karakok);
}
else{
    printf("you should enter bigger number than last");
}
  return 0;
}