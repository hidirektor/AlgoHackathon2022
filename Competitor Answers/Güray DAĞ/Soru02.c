#include <stdio.h>
int main(){
int dizi1[8]={8,10,19,6,17,14,15,2};
int dizi2[8]={17,18,11,2,10,4,15,3};
int dizi3[8]={11,2,9,19,20,10,12,14};
int yeniDizi1[16];
int sonDizi[24];
int sayac=0;
int degis=0;
for(int i=0;i<8;i++){
    yeniDizi1[2*i]=dizi1[i];
    yeniDizi1[2*i+1]=dizi2[i];
}
for(int i=0;i<16;i++){
    sonDizi[i] = yeniDizi1[i];
}
for(int i=0;i<8;i++){
    sonDizi[i+16]=dizi3[i];
}
for(int i=24;i>0;i--){
    for(int j=0;j<24;j++){
        if(sonDizi[i]==sonDizi[j] && i!=j){
            sonDizi[i]=NULL;
        }
    }
}
for(int i=0;i<24;i++){
    for(int j=0;j<23;j++){
        if(sonDizi[j]>sonDizi[j+1]){
            degis = sonDizi[j+1];
            sonDizi[j+1]=sonDizi[j];
            sonDizi[j] = degis;
        }
    }
}
for(int i=9;i<24;i++){
    printf("%d ",sonDizi[i]);
}
return 0;
}
