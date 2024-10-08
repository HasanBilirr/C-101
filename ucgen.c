#include <stdio.h>
#include <stdlib.h>
 // @brief
 // @return

 int main() 
 {
    float x ;
    float y ;
    

    printf("ucgenin alanini bulmamiz icin ilk olarak bir taban uzunluguna ihtiyacimiz var,taban uzunlugu icin bir sayi giriniz");
    scanf("%f",&x);
    printf("bir de yukseklik icin sayi giriniz ");
    scanf("%f",&y);

    float z = x*y/2;

 //   printf("%.2f",x*y/2);
    printf("yuksekligi %.0f,taban uzunlugu %.0f olan ucgenin alani %.2f dir",y,x,z);
 return 0;
}