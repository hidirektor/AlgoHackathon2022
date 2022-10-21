#include <stdio.h>
#include <stdlib.h>
//dayan karabas yaparsin sen
int main()
{

    int dizi1[2][2];
    int dizi2[2][2];
    int carpim[2][2];
    //dizi 1 al
    for(int i=0; i<2;i++)
    {
         for(int j=0; j<2; j++)
         {
             printf("1. dizinin [%d]-[%d] elemanini giriniz : ",i,j);
             scanf("%d",&dizi1[i][j]);
         }
    }
   //dizi 1 yazdir
   printf("Birinci 2x2 matrix \n");
   printf("---------------------\n");
    for(int m=0; m<2;m++)
    {
         for(int n=0; n<2; n++)
         {
             printf(" %d ",dizi1[m][n]);

         }
         printf("\n");
    }

printf("----------------\n");


//dizi 2 al
    for(int k=0; k<2;k++)
    {
         for(int m=0; m<2; m++)
         {
             printf(" 2. dizinin [%d]-[%d] elemanini giriniz : ",k,m);
             scanf("%d",&dizi2[k][m]);
         }
    }
   //dizi 2 yazdir
   printf("ikinci 2x2 matrix \n");
   printf("---------------------\n");
    for(int t=0; t<2;t++)
    {
         for(int y=0; y<2; y++)
         {
             printf(" %d ",dizi2[t][y]);

         }
         printf("\n");
    }
 printf("----------------\n");


        int a,b,c,d,e,f,g,h;
        a=dizi1[0][0];
        b=dizi1[0][1];
        c=dizi1[1][0];
        d=dizi1[1][1];
        e=dizi2[0][0];
        f=dizi2[0][1];
        g=dizi2[1][0];   // burada hata yapma riskin cok yüksek 100 kere kontrol et o yüzden
        h=dizi2[1][1];

     int p1,p2,p3,p4,p5,p6,p7;
     p1=a*(f-h);
     p2=(a+b)*h;
     p3=(c+d)*e;
     p4=d*(g-e);
     p5=(a+d)*(e+h);    //burada da hata yapma riskin cok yüksek o yüzden kontrol et. unutma sen malsin hata yaparsin fahri.
     p6=(b-d)*(g+h);
     p7=(a-c)*(e+f);


        carpim[0][0]=p5+p4-p2+p6;
        carpim[0][1]=p1+p2;
        carpim[1][0]=p3+p4;
        carpim[1][1]=p1+p5-p3-p7;   //fahri sen malsin yanlis yaparsin nolur 100 kere kontrol et surayi


   printf("--------carpim matrixi----------- \n");

   for(int q=0; q<2;q++)
    {
         for(int w=0; w<2; w++)
         {
             printf(" %d ",carpim[q][w]);

         }
         printf("\n");
    }

    return 0;
}
