#include <stdio.h>
//COZEMEDIM
int main(){
int sayilar[9] = {129,218,110,227,120,199,400,371,237};
int sayilar2[27];
for(int i=0;i<9;i++){
    sayilar[i] = (sayilar[i]%1000)/100;
}
for(int i=0;i<9;i++){
    for(int j=1;j<9-i;j++){
        if(sayilar[j-1]>sayilar[j]){
            int degis = sayilar[j];
            sayilar[j] = sayilar[j-1];
            sayilar[j-1] = degis;
        }
    }
}
printf("Rasgele 9 sayi icerisindeki en buyuk sayi = %d",sayilar[8]);
return 0;
}
int basamakAlma(int sayi){
int bas1=sayi/100;
int bas2=(sayi/10)%10;
int bas3=sayi/100;

return bas1, bas2, bas3;
}
