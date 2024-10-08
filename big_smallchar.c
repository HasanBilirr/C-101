#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //that is library for tolower & toupper  
// tolower=girilen harfi küçültmek için
// toupper=girilen harfi büyütmek için

int main()
{
char letter ;
printf("enter one char,please\n");
scanf(" %c",&letter);

if((letter>='A')&&(letter<='Z')){
    printf("entered letter is getting small =%c\n",tolower(letter));
}
else if ((letter>='a')&&(letter<='z')){
    printf("entered letter is getting big =%c\n",toupper(letter));
}
else{
    printf("entered character is incorrect");
}


  return 0;
}