#include <stdio.h>
#include <stdlib.h>

int usalma(taban,us)
{

    if(us==1)
    {
        return taban;
    }
    if(us==0)
    {
        return 1;
    }
    int cevap=1;
    if(us!=1)
    {
        cevap=cevap*taban*usalma(taban,us-1);
        return cevap;
    }

}
int main()
{
    int taban;
    int us;
    int cevap=1;
    printf("Taban giriniz : ");
    scanf("%d",&taban);
    printf("Us giriniz : ");
    scanf("%d",&us);

    cevap=usalma(taban,us);
    printf("Cevap : %d",cevap);

    return 0;
}
