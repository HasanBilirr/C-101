#include <stdio.h>
#include <stdlib.h>
int main()
{
int x,y,z ;
printf("enter 3 angle for make a triangle\n");
scanf("%d%d%d",&x,&y,&z);

if(x+y+z==180){
    if(x==y && y==z){
        printf("bu ucgen eskenar ucgen\n");
    }
    // else if(60>x&&60>y&&60>z){
    //     printf("bu ucgen dar acili ucgen\n");
    else if(x>90||z>90||y>90){
        printf("bu ucgen genis acili ucgen\n");
    }
    else if(x+y==90||x+z==90||y+z==90){
        printf("bu ucgen dik ucgendir\n");
    }
    else if(x<90&&y<90&&z<90){
        printf("bu ucgen dar acili ucgen");
    }
}
else if(x+y+z>180){
    printf("girilen sayilar azaltilmali\n");
}
else if("x+y+z<180"){
    printf("girilen sayilar arttirilmali\n");
}
  return 0;
}