#include <stdio.h>
#include <stdlib.h>
 // @brief
 // @return
 int main() {
 
 int x ;
 int y ;
 int z ;
 printf("write 3 number,please");
 scanf("%d %d %d",&x,&y,&z);
  //  && ve     ||  veya 
if(x>y && x>z)
{
 printf("%d en buyuk sayidir",x);
   
}else if(y>z && y>x)
  {
    printf("%d en buyuk sayidir",y);
   
  }else if(z>x && z>y)
  {
    printf("%d en buyuk sayidir",z);
  }else if(x==y==z)
  {
    printf(" hepsi birbirine esittir");
  }

 return 0;


}

