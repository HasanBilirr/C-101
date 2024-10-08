#include <stdio.h>
#include <stdlib.h>

int main()
{
// break 
  int i ;

  for (i=0 ; i<11 ;i++)
  {
   printf("%d\n",i);
     if (i == 4)
    {
        break ;
    }
  }
printf("\n");
// continue 
  int x ;

  for (x=0;x<11;x++)
{
    if(x==5)
    {
        continue ;
    }
    if(x==8)
    {
        break;
    }
   
   printf("%d\n",x);

 
}



    return 0 ;
}