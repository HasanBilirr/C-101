#include <stdio.h>
#include <stdlib.h>

int main()
{

// int a ;
// int b ;
// int c ;
//  printf("3 tane sayi giriniz\n");
//  scanf("%d\n%d\n%d",&a,&b,&c);
//  printf("\n 1.sayimiz=%d\n 2.sayimiz=%d\n 3.sayimiz=%d\n",a,b,c);
//  if(a<b && a<c && b<c)
// {
//   printf("en kucuk sayi %d\n en buyuk sayi da %d\n",a,c );
// }
// else if(b<a && b<c && a<c)
// {
//   printf("en kucuk sayi %d\n en buyuk sayi da %d\n",b,c );
// }
// else if(a<b && a<c && c<b)
// {
//   printf("en kucuk sayi %d\n en buyuk sayi da %d\n",a,b );
// }
// else if(b<a && b<c && c<a)
// {
//   printf("en kucuk sayi %d\n en buyuk sayi da %d\n",b,a );
// }
// else if(c<b && c<a && b<a)
// {
//   printf("en kucuk sayi %d\n en buyuk sayi da %d\n",c,a );
// }
// else if(c<b && c<a && a<b)
// {
//   printf("en kucuk sayi %d\n en buyuk sayi da %d\n",c,b );
// }
// else 
// {
//   printf("hepsi birbirine esittir\n");
// }
int a, b, c ;
int max, min ;
printf("enter 3 numbers , please \n");
scanf ("%d%d%d",&a,&b,&c);

max=a;
if (b>max)
{
    max=b ;
}
if(c>max)
{
    max=c ;
}

min=a ;
if (b<min)
{
    min = b ;
}
if (c<min)
{
    min = c ;
}
printf("min number = %d \nmax number = %d \n",min,max);
 return 0 ;
 }