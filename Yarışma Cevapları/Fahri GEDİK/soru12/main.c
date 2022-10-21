#include <stdio.h>
#include <stdlib.h>
//pes etme farcan!!
#include <time.h>


int randomsayi()
{

    int a= rand()%999;
    if(a>99 && a<999)
    {
        return a;
    }
    else
    {
        randomsayi();
    }
}
int main()
{

    int ilkucbasamak;
    int rnd,sayi;
    printf("sayinin ilk 3 basannagini giriniz : ");
    scanf("%d",&ilkucbasamak);
    for(int say=1;say<=5;say++)
    {
       rnd=randomsayi();
       sayi=(ilkucbasamak*1000)+rnd;
      printf("%d \n",sayi);
    }

    return 0;
}
