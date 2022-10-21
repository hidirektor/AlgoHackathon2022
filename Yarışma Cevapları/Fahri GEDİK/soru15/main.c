#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char metin[50];
    char metin2[50]; //duygulanmwk :(
    printf("Metin giriniz : ");
    scanf("%s",metin);
    for(int i=0; i<strlen(metin);i++)
    {
        printf(" %d ",metin[i]);
    }
    int temp;



    for(int a=0; a<strlen(metin); a++)
    {
        for(int b=0; b<strlen(metin); b++)
        {
            if(metin[a]<metin[b])
            {
                temp=metin[b];
                metin[b]=metin[a];
                metin[a]=temp;
            }
        }
    }

     printf("\n");
     for(int t=0; t<strlen(metin);t++)
    {
        printf(" %d ",metin[t]);
    }

    printf("\n");
    return 0;
}
