#include <stdio.h>
#include <stdlib.h>
#define tam 150 
int main()
{
int no,minno,length,minlength,fark ;
printf("enter a student number for comparative\n");
scanf("%d",&no);
printf("enter the student's length\n");
scanf("%d",&length);

no=minno;
fark=abs(length-tam);
while(no>0){
    printf("\nstudent number: \n");
    scanf("%d",&no);
    printf("\nstudent length: \n");
    scanf("%d",&length);
    if(abs(length-tam)<fark){
        fark=abs(length-tam);
        minno=no;
        minlength=length;
    }
}
 printf("\n %d numarali ogrenci %d boyu ile %d cm en yakindir",minno,minlength,fark);
  return 0;
}