#include <stdio.h>
#include <string.h>

int main()
{
 int a , b ;
 printf("entire 2 numbers \n");
 scanf("%d%d",&a,&b);

 if(a==b){
    printf("two numbers is equal each other\n");
 }
 else if(a>b){
    printf("%d is a number greater than %d \n",a,b);
 }
 else {
    printf("%d is a number greater than %d \n",b,a);
 }
    return 0;
}










