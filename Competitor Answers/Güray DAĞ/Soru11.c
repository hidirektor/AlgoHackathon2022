#include <stdio.h>
int main(){
int dizi[] = {50,43,987,123,67,84,176,341,674,121,243,305,192,1203};
for(int i=0;i<14;i++){
    for(int j=1;j<14-i;j++){
        if(dizi[j-1]>dizi[j]){
            int degis = dizi[j];
            dizi[j] = dizi[j-1];
            dizi[j-1] = degis;
        }
    }
}
for(int i=0;i<14;i++){
    printf("%d ",dizi[i]);
}
int toplam=0;
int bas1=0, bas2=0, bas3=0;
printf("\n");
for(int i=0;i<3;i++){
    bas1+=dizi[i]/10;
}
for(int i=0;i<3;i++){
    bas2+=dizi[i]%10;
}
toplam = bas1+bas2;
printf("\n%d",toplam);
return 0;
}
