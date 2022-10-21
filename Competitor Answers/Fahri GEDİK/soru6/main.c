#include <stdio.h>
#include <stdlib.h>

int main()
{ // mükemmel sayi : kendisi haric pozitif tam bölenlerinin toplami kendisine eþit olan sayidir.

    int toplam=0;
    printf("1-500 arasindaki mukemmel sayilar \n");
     for(int i=2; i<500;i++)
     {
         for(int b=1; b<i; b++)
         {
             if(i%b==0)
             {
                 toplam=toplam+b;
             }


         }
         if(toplam==i)
         {
             printf(" %d sayisi mukemmel sayidir \n",toplam);
             toplam=0;
         }
         if(toplam!=i)
         {
             toplam=0;
         }

     }
    return 0;
}
