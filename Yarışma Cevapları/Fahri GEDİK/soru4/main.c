#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[3][3];
    int dizi2[3][3];

     for(int i=0;i<3;i++)
     {
         for(int j=0; j<3;j++)
         {
             printf("dizinin [%d]-[%d] elemanini giriniz : ",i,j);
             scanf("%d",&dizi1[i][j]);
         }
     }

     for(int a=0; a<3;a++)
     {
         for(int b=0; b<3; b++)
         {
             printf(" %d ",dizi1[a][b]);
         }
         printf("\n");
    }


         for(int k=0; k<3; k++)
         {
            for(int m=0; m<3; m++)
            {
               // printf("dizi1(%d)(%d)  %d  %d %d \n",m,k,dizi1[m][k],k,m);
                dizi2[k][m]=dizi1[m][k];
            }
         }

      printf(" \n \n \n \n --------- yeni dizi ---------\n");
         for(int f=0; f<3; f++)
         {
            for(int g=0; g<3; g++)
            {
                printf(" %d ",dizi2[f][g]);
            }
             printf("\n");

         }

      printf("\n");





    return 0;
}
