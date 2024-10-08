#include <stdio.h>
#include <stdlib.h>

int main()
{
char op ;
printf("lutfen operator giriniz\n");
scanf("%c",&op);

float a, b ;
printf("lutfen 2 sayi giriniz\n");
scanf("%f %f",&a,&b);

switch(op)
{
  case'+' : printf("%.2f + %.2f = %.2f",a,b,a+b);
  break ;
  case'-' : printf("%.2f - %.2f = %.2f",a,b,a-b);
  break ;
  case'*' : printf("%.2f * %.2f = %.2f",a,b,a*b);
  break ;
  case'/' : printf("%.2f / %.2f = %.2f",a,b,a/b);
  break ;
  default : printf("hatali giris yaptiniz");

}

}