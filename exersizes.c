#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609
int main()
{
   int a,b,temporary ;
   printf("A sayisini giriniz\n");
   scanf("%d",&a);
    printf("B sayisini giriniz\n");
   scanf("%d",&b);

   printf("degisim olmadan once\n");
   printf("A sayisi =%d \n B sayisi =%d\n",a,b);

   temporary=a ;
   a=b ;
   b=temporary;

    printf("A sayisi =%d \n B sayisi =%d\n",a,b);


   
    return 0 ;
}