#include <stdio.h>
#define n 14

int main(void)
{
 int a[n] = {50,43,987,123,67,84,176,341,674,121,243,305,192,1203};
 int i, j, k, eb;


 for(k=0; k<n; k++)
    {
    eb = a[k];
    i = k;
        for(j=k+1; j<n; j++)
            if( a[j]>eb )
                {
                    eb = a[j];
                    i = j;
                }
        a[i] = a[k];
        a[k] = eb;
    }

    int ek=a[n-1]+a[n-2]+a[n-3];
    printf("en kucuk toplam:%d",ek);

    return 0;
}
