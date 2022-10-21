#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[9]={129,218,110,227,120,199,400,371,237};
    int basamaklar[27];
    int birler,yuzler,onlar;
    int sayac=0;

    for(int p=0; p<9; p++)
    {
        printf(" %d ",sayilar[p]);
    }


    for(int i=0; i<9; i++)
    {
        birler=sayilar[i]%10;
        onlar=((sayilar[i]-birler)%100)/10;
        yuzler=(sayilar[i]-(10*onlar)-birler)/100;
        basamaklar[sayac]=birler;
        sayac++;
       basamaklar[sayac]=onlar;
        sayac++;
        basamaklar[sayac]=yuzler;
        sayac++;
    }
 int temp;
    for(int a=0; a<27; a++)
    {
        for(int b=0;b<27;b++)
        {
            if(basamaklar[a]>basamaklar[b])
            {
                temp=basamaklar[b];
                basamaklar[b]=basamaklar[a];
                basamaklar[a]=temp;
            }
        }
    }

    printf("\n \n -------- en yuksek sayi -------- \n ");
      for(int f=0;f<27;f++)
      {
          printf("%d",basamaklar[f]);
      }
    return 0;
}
