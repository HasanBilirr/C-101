#include <stdio.h>
#include <stdlib.h>

int main()
{
char name[25];
char surname[25] ;
int age ;
char firstchar[25];

printf("\nGive me your favorite letter:\n");
scanf(" %s",&firstchar);

printf("\nGive me your name: \n");
scanf("%s",&name);

printf("\nGive me your surname: \n");
scanf("%s",&surname);

printf("\nGive me your age: \n");
scanf("%d",&age);



printf("\nYour Informations\n\nName :%s\nSurname :%s\nAge :%d\nFirstchar :%s\n\n",name,surname,age,firstchar);



return 0 ;

}