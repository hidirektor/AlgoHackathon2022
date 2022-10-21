#include <stdio.h>
#include <stdlib.h>

int main()
{
     //bu sorunun bende travmasi var ayni soru tubitaktaki katildigim hackathonda cikmisti ve ben yapamamistim :'(
    int yil;
    printf("Yil giriniz");
    scanf("%d",&yil);

     while(yil>=4)
     {
         yil=yil-4;
     }
     if(yil==0)
     {
         printf("Artik yil bu ya");
     }
     if(yil!=0)
     {
         printf("Girilen yil artik degildir");
     }

    return 0;
}
