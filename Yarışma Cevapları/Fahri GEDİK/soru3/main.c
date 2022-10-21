#include <stdio.h>
#include <stdlib.h>

void ucbasamak(int sayi)
{
      int birler,onlar,yuzler;
      birler=sayi%10;
      onlar=((sayi-birler)%100)/10;
      yuzler=(sayi-(onlar*10)-birler)/100;
    //printf("b %d o %d y %d",birler,onlar,yuzler);
      if((birler==yuzler) || (birler==yuzler && birler==onlar && onlar==yuzler))
      {
        printf("Girilen sayi palindrom sayidir");
      }
      else
      {
          printf("Girilen sayi palindrom sayi degildir");
      }

}
void ikibasamak(int sayi)
{
int birler=sayi%10;
 int onlar=((sayi-birler)/10);

 if(birler==onlar)
 {
     printf("Girilen sayi bir palindrom sayidir");
 }
 else
{
 printf("Girilen sayi bir palindrom sayi degildir");
}
}


int main()
{
    int sayi=0;

    printf("Bir sayi giriniz \n");
    scanf("%d",&sayi);
    if((sayi>0 && sayi<100) || (sayi<0 && sayi>-100))
    {
        ikibasamak(sayi);
    }
    else if((sayi>=100 && sayi<1000) || (sayi<=100 && sayi>-1000))
    {
       ucbasamak(sayi);
    }


    return 0;
}
