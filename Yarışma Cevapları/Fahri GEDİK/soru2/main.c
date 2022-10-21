#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int dizi1[8]={8,10,19,6,17,14,15,2};
    int dizi2[8]={17,18,11,2,10,4,15,3};
    int dizi3[8]={11,2,9,19,20,10,12,14};
    int dizi4[24];

 int temp;



     int sayac=0;
     int sayac2=0;
    for(int b=0;b<24;b++)
    {
        if(b==7 || b==15)
        {
            sayac=0;
            sayac2++;
        }
        if(sayac2==0)
        {
            dizi4[b]=dizi1[sayac];
            sayac++;
        }
        if(sayac2==1)
        {
            dizi4[b]=dizi2[sayac];
            sayac++;
        }
        if(sayac2==2)
        {
            dizi4[b]=dizi3[sayac];
            sayac++;
        }


    }



      for(int a=0; a<24; a++)
      {
        for(int b=0; b<24; b++)
        {
            if(dizi4[a]<dizi4[b])
            {
                temp=dizi4[b];
                dizi4[b]=dizi4[a];
                dizi4[a]=temp;
            }
        }
       }

   for(int a=0; a<24; a++)
     {
        printf(" %d ",dizi4[a]);

     }


 int tekrar;
     printf("\n");

     int sayac3=0;
      for(int a=0; a<24; a++)
    {
        for(int b=0; b<24; b++)
        {
               if(dizi4[a]==dizi4[b])
               {
                   tekrar++;
               }


        }
        if(tekrar>=2)
        {
            dizi4[a]=0;
            tekrar=0;
        }
        else
        {
            tekrar=0;
        }


     }


    /*for(int a=0;a<24;a++)
     {
         if(dizi4[a]!=0);
         {
             dizi5[sayac3]=dizi4[a];
             sayac3++;
         }

     }*/

      for(int a=0; a<24; a++)
     {
         if(dizi4[a]!=0)
         {
               printf(" %d ",dizi4[a]);
         }


     }






    return 0;
}
