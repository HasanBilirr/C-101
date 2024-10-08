#include <stdio.h>
#include <stdlib.h>
int main()
{
int x,birler,onlar,yuzler,binler ;    
printf("enter a number,please\n");
scanf("%d",&x);
birler=x % 10;
onlar=x % 100 / 10;
yuzler=x % 1000 / 100;
binler=x % 10000 / 1000;
printf("birler basamagi = %d\n",birler); 
printf("onlar basamagi = %d\n",onlar);  
printf("yuzler basamagi = %d\n",yuzler);  
printf("binler basamagi = %d\n",binler);   
  return 0;
}