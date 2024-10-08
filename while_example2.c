#include <stdio.h>
#include <stdlib.h>
int main()
{
int x=0 ;
printf("enter a number, please\n");
scanf("%d",& x);

int y = x;

 printf("\n") ;
while(x>0){
    if(x!=1){
    printf("%2d +",x);
    }else{
    printf("%2d",x); 
    }
    x-=1 ;
}
 printf("\n");
 printf("result = %d",y*(y+1)/2);

  return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// int x=0 ;
// int result = 0 ;
// // x*(x+1)/2
// printf("entire a number, please\n");
// scanf("%d",& x);

//  printf("\n") ;
// while(x>0){
//     result+=x;
//     // result = result + x;
//     printf("%2d",x);
//     x-=1 ;
// }
//  printf("\n");
//  printf("result = %d",result);

//   return 0;
// }