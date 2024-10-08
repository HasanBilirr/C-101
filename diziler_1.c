#include <stdio.h>
#include <stdlib.h>
int main()
{
// int x [5]={1,3,5,7,9};
// int i ; 
// // for(i=0;i<3;i++){
// //  printf("%  d",x[i]);
// // }
// int w [10];
// int i ;
// for(i=0;i<10;i++){
    
//     w [i]=2*i ;    
// }
// for(i=0;i<10;i++){
//     printf("%d\n",w[i]);
// }

int w [10];
int i;
int n=0 ;
for(i=0;i<=18;i+=2){

    w[n]=i ;
    n ++ ;
    if(n>=10){
    break ;
    }
}
for(n=0;n<=10;n++){
    printf("%   d",w[n]);
}
  return 0;
}