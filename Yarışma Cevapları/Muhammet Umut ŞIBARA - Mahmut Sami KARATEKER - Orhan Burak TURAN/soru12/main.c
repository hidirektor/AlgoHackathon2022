#include <stdio.h>
#include <stdlib.h>





int main()
{
    int x=0;
    do
    {
    char dizi[2];
    for(int i=0; i<3; i++)
    {
        printf("Sayi gir:");
        scanf("%d",&dizi[i]);
    }
    for(int u=0;u<3;u++)
    {
        printf("%d",dizi[u]);
    }
    printf("456\n");
    x++;
    }
    while(x<5);
    return 0;
}
