#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[3][3];

    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("dizinin [%d]-[%d] elemanini giriniz : ",i,j);
            scanf("%d",&dizi1[i][j]);
        }
    }


     for(int a=0; a<3;a++)
    {
        for(int b=0; b<3;b++)
        {
            printf(" %d ",dizi1[a][b]);

        }
        printf("\n");

    }



    return 0;
}
