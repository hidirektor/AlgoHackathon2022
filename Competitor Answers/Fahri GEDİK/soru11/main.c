#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[14]={50,43,987,123,67,84,176,1,2,3,243,305,192,1203};
      int toplam;
      int a,b;
      toplam=dizi[0]+dizi[1]+dizi[2];
      int x,y,z;
     for(int i=0; i<14;i++)
      {
          a=i+1;
          b=i+2;
          while(a<14 )
          {
              for(int c=0; c<14;c++)
              {
                if(toplam>(dizi[a]+dizi[i]+dizi[c]) && a!=c && a!=i && i!=c)
                {
                toplam=dizi[a]+dizi[i]+dizi[c];
                x=dizi[a];
                y=dizi[i];
                z=dizi[c];
                }
              }
            a++;
          }
      }
      printf("%d %d %d",x,y,z);


    return 0;
}
