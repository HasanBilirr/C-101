#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b ;
char opearator;
float result;
printf("enter 2 number for a,b\n");
scanf("%d%d",&a,&b);
printf("you can choose what you want from options of beneath\n");
printf("A-) +\nB-) -\n");
scanf(" %c",&opearator);
switch(opearator){
    case'A' :{
        printf("operation result=%f",(a+b/a*b));
   break ;  }
    case'B' :{
        printf("operation result=%f",(a-b/a*b));
   break ;
    }
 default : printf("your choose is wrong\ntry it again\n");
}  
  return 0;
}