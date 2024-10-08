#include <stdio.h>
#include <stdlib.h>
// int home(int width,int length,int job){
//    return width*length + job ;
// }

// int main()
// // 40 - 200
// {
// int width=0,length=0 ;    
// int job=200 ;
// printf("enter a number for length of home \n");
// scanf("%d",&length);
// printf("enter a number for width of home \n");
// scanf("%d",&width);

// printf("carpet price = %d",home(width,length,job));
//   return 0;
// }

int main(){
char options ;
printf("you can choose what you want from options of beneath\n ");
printf("A-marvel\n B-tom and jerry\n C-cars\n");

scanf(" %c",&options);

switch(options){
    case'A' :{ printf("this carpet's price is 50TL per metrekare\n");
               int x=0,y=0;
               int job = 200 ;
              printf("enter a number for length of home \n");
              scanf("%d",&x);
              printf("enter a number for width of home \n");
              scanf("%d",&y);
             int top_price = 50*(x*y)+job ;
             printf("this product's top price = %d",top_price);
   break ;
    }
    case'B' :{ printf("this carpet's price is 100TL per metrekare\n");
               int x,y;
               int job = 200 ;
              printf("enter a number for length of home \n");
              scanf("%d",&x);
              printf("enter a number for width of home \n");
              scanf("%d",&y);
             int top_price = 100*(x*y)+job ;
             printf("this product's top price = %d",top_price);
   break ;
    }
    case'C' :{ printf("this carpet's price is 150TL per metrekare\n");
               int x,y;
               int job = 200 ;
              printf("enter a number for length of home \n");
              scanf("%d",&x);
              printf("enter a number for width of home \n");
              scanf("%d",&y);
             int top_price = 150*(x*y)+job ;
             printf("this product's top price = %d",top_price);
   break ;
    }
 default : printf("your entered is incorrect\n");
}
    return 0 ;
}