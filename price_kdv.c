#include <stdio.h>
#include <stdlib.h>
#define kdv0 0.040
#define kdv1 0.056
#define kdv2 0.196

// 3 adet ürün var 
// kitap0 4 temel gidaya1 5.6  luks2 19.6


int main()
{
int book=100;
int basicfood=200;
int lux=1000;
char options;
float price=0.0;
printf("cost of products :\nbook:100\nbasic food:200\nlux:1000\n");
printf("what do you want from options of beneath\n");
printf("A-book\nB-basic foood\nC-lux\n");
scanf(" %c",&options);

switch(options){
    case'A' : price=book+book*kdv0 ;
     printf("top price :%.2f\n",price);
    break ;
    case'B' : price=basicfood+basicfood*kdv1 ;
     printf("top price :%.2f\n",price);
    break ;
    case'C' : price=lux+lux*kdv2 ;
     printf("top price :%.2f\n",price);
    break ;
    default : printf("your entered is wrong\n");
}
  return 0;
}