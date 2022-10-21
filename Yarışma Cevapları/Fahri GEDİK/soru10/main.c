#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char dizi[30];
    printf("max 30 karakterli bir metin girinizz :\n");
    scanf("%s",&dizi);
    int a;
    for(int i=0;i<30;i++)
    {
        a=i+1;
        while(a<30)
        {
            if(dizi[i]==dizi[a] && dizi[i]!=' ' && dizi[a]!=' ')
            {
                dizi[a]=' ';
            }
             a++;
        }
    }

    for(int j=0; j<30; j++)
    {
        if(dizi[j]!=' ')
        printf("%c",dizi[j]);
    }

    return 0;
}
