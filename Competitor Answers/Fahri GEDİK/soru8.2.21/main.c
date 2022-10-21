#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uzunluklar[4];

    for(int i=0;i<4;i++)
    {
    printf("kenar uzunlugu giriniz \n");
    scanf("%d",&uzunluklar[i]);
    }
    int sayac=0;
    for(int b=0; b<4;b++)
    {
        for(int c=0;c<4;c++)
        {
            if(uzunluklar[b]==uzunluklar[c])
            {
                sayac++;
            }
        }
    }
    //toplam 16 kiyaslama yapacak ve 8i doðru ise dikdortgen hepsi dogru ise karedir.


    switch(sayac)
    {
    case 16:
        {
            printf("Bu bir kare");
            break;
        }
    case 8:
        {
            printf("Bu bir dikdortgen");
            break;
        }
    default:
        {
          printf("girilen kenar uzunluklarina sahip kare ve dikdortgen yoktur");
          break;
        }
    }
    return 0;
}
