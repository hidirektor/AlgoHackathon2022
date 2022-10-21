#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sesliharfler[6]={'a','e','i','ý','u','o'};   //sesli harfleri bunlar kabul ettim daha fazla ise ekleyebilirsiniz
    char metin[100];
   // char yenimetin[100];

    printf(" \n Metin giriniz : ");
    scanf("%s",&metin);

    if(strlen(metin)<9)
    {
        printf("Lütfen 9 karakterden buyuk bir metin giriniz ");
        main();
    }
    int sayac=0;
    if(strlen(metin)>=9)
    {


        for(int h=0; h<strlen(metin); h++)
        {
            for(int k=0; k<6;k++)    //sesli harf eklediyseniz k<6 yý deðiþtirmeniz gereklidir.
            {
                if(sesliharfler[k]==metin[h])
                {

                    metin[h]=' ';

                }

            }
        }

        for(int a=0; a<strlen(metin);a++)
        {
            if(metin[a]!=' ')
            printf("%c", metin[a]);
        }
    }




    return 0;
}
