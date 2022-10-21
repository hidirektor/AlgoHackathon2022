#include <stdio.h>
int main(){
int sayi;
printf("Palindrom sayi kontrolu için maksimum 3 basamakli bir sayi giriniz:\n");
scanf("%d",&sayi);
int birler, onlar, yuzler;
birler = sayi % 10;
onlar = (sayi % 100)/10;
int palindrom = (birler*birler*birler)+(onlar*onlar*onlar);
if(sayi>=100 && sayi <=999){
    yuzler = (sayi%1000)/100;
    palindrom +=(yuzler*yuzler*yuzler);
    if(palindrom==sayi){
        printf("Girdiginiz sayi palindrom sayidir!\n");
    }
    else{
        printf("Girdiginiz sayi palindrom degildir.\n");
    }
}
else{
if(palindrom==sayi){
        printf("Girdiginiz sayi palindrom sayidir!\n");
    }
    else{
        printf("Girdiginiz sayi palindrom degildir.\n");
    }
}
return 0;
}



