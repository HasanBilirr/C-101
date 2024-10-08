#include<stdio.h>

int main(){

  /*  for(int i  = 1 ; i <  2 ; i++){
        printf("ben ensar uzer \n");
        printf("1.74 boyundayim  \n");
        printf("essek kelimesini severim \n");
        printf("ve hasan gibi mukemmel bir insan gormedim"); 

int x ;
   printf("give me a number please\n");
   scanf("%d",&x);
int result = 0 ;
 
for(int i=1;i<=x;i++)
 {
    result += i ;
 }

  printf("result = %d",result);


int i ;

for(i=0;i<=10;i+=2)
{
    printf("%d\n",i);
}
      x^y(x üssü y)

 int x ;
 int y ;

printf("uslu sayilarda hesap yapabilmek icin bir tane taban sayisina ihtiyac vardir,bir sayi giriniz\n");

scanf("%d",&x);

printf("bir tane de us icin giriniz\n");

scanf("%d",&y);
  int i ;
 int result = 1 ; 
  for (int i=1;i<=y;i++ )
    {
        result *= x ;
    }

printf("%d'nin %d'ninci kuvveti %d'dir",x,y,result);


int i = 2 ;
int result = 0 ;
for (int i=2;i<=40;i+=2)
{
  result += i ;
}
 printf("result = %d",result);
*/

printf("Otobus rotalari icin ");
printf("lutfen enter'a basiniz\n ");

char x ;
scanf("%c",&x);

printf("asagidaki para miktarlarindan birini seciniz\n");
printf("1-500 2-1000 \n 3-1500  4-2000 \n");
int secenek;

scanf("%d",&secenek);

switch(secenek)
{
        
 case 1:
 {
        int a ;
        printf("iki secenegin var \n 1-gonen  2-susurluk");
        scanf("%d",&a);
          switch(a)
           {
            case 1 : printf("gonen e gideysun");
            break;
            case 2 : printf("susurluk ayranini tatmadan gelme ");
            break;
           } 
 
 break;}
 case 2 :
 {       
         int y ;
         printf("iki secenegin var \n 1-Bursa  2-Balikesir");
         scanf("%d",&y);
          switch(y)
           {
             case 1 : printf("bursa'nin iskenderini tatmadan gelme");
             break;
             case 2 : printf("balikesire gitmişken sahil kesimindeki koylari unutma");
             break;
           }
  
 break;         }
 case 3 : {int z ;
          printf("iki secenegin var \n 1-Antalya  2-Ankara ");
          scanf("%d",&z);
           switch(z)
           {
             case 1 : printf("antalyada guzel bir tatil yap , hakettin ");
             break;
             case 2 : printf("ankara icin saglam giyin , soguktur");
             break;
           }         
 break;}
 case 4 : {int t ;          
          printf("iki secenegin var \n 1-Bandirma  2-Istanbul");
          scanf("%d",&t);
           switch(t)
          {
            case 1 : printf("bandirma dunyanin en buyuk ulkesi");
            break;
            case 2 : printf("istanbul");
            break;
          }
break;}
}


 



return 0;
}