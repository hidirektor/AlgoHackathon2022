#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char metin[100];
printf("Boyutunu ogrenmek istediginiz metni giriniz:\n");
gets(metin);
int boyutDizi[strlen(metin)];
for(int a=0;a<strlen(metin);a++){
    boyutDizi[a]=metin[a];
    printf("%d\n",boyutDizi[a]);
}
for(int i=0;i<strlen(metin);i++){
        for(int j=1;j<strlen(metin)-i;j++){
            if(boyutDizi[j-1] > boyutDizi[j]){
                int temp = boyutDizi[j];
                boyutDizi[j] = boyutDizi[j-1];
                boyutDizi[j-1] = temp;
            }
        }
    }
printf("\n------------------------\n");
for(int k=0;k<strlen(metin);k++){
    printf("%d ",boyutDizi[k]);
}
return 0;
}
