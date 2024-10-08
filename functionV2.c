#include <stdio.h>
#include <stdlib.h>

float us (float x ){
    return (x*x*x)+(13*x*x)+(47*x)+5 ;
}


int main()
{
float x ;
printf("entire a number,please\n");
scanf("%f",&x);
printf(">> f(%.3f)=%.3f",x,us(x));
// } 
//   float us (float x ){
   
//     return (x*x*x)+(13*x*x)+(47*x)+5 ;
  
//   return 0;

}
