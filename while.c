#include <stdio.h>
#include <stdlib.h>

int main()
{
//   int sayi ;
//   printf("lutfen bir sayi giriniz \n");
//   scanf("%d",&sayi);

//   int i = 1 ;
//   while(i<=10)
//   {
//      printf("%d\n",i*sayi);
//      i++ ;

//   }
char x ;
printf("bir tanesini seciniz \n A-tek  B-cift  ? \n");
scanf(" %c",&x);

switch(x)
{
  case 'B' :{ int i=0 ;
           while (i<=10) 
           {
             printf("%d\n",i);
             i+=2 ;
           }
  break ; }           
  
  case 'A' :{ int i=1;
           while (i<=10) 
           {
            printf("%d\n",i);
            i+=2 ;
           }
  break ;}
  default : printf("hatali giris yaptiniz");
}

    return 0 ;
} 