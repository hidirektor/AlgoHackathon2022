#include <stdio.h>
int main(){

int dizi1[1][1];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
    printf("1. Dizideki %d'ye %d. sayiyi giriniz:",i,j);
    scanf("%d",&dizi1[i][j]);
    }
}
int dizi2[1][1];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
    printf("2. Dizideki %d'ye %d. sayiyi giriniz:",i,j);
    scanf("%d",&dizi2[i][j]);
    }
}
/*
d1   d2
a = e = 0 0
b = f = 0 1
c = g = 1 0
d = h = 1 1
*/
int say1 = (dizi1[0][0]*(dizi2[0][1]-dizi2[1][1]));
int say2 = ((dizi1[0][0]+dizi1[0][1])*dizi2[1][1]);
int say3 = ((dizi1[1][0]+dizi1[1][1])*dizi2[0][0]);
int say4 = (dizi1[1][1]*(dizi2[1][0]-dizi2[0][0]));
int say5 = (dizi1[0][0]+dizi1[1][1])*(dizi2[0][0]+dizi2[1][1]);
int say6 = (dizi1[0][1]-dizi1[1][1])*(dizi2[1][0]+dizi2[1][1]);
int say7 = (dizi1[0][0]-dizi1[1][0])*(dizi2[0][0]+dizi2[0][1]);

int strassendizi[2][2];
strassendizi[0][0]=(say5+say4-say2+say6);
strassendizi[0][1]=(say1+say2);
strassendizi[1][0]=(say3+say4);
strassendizi[1][1]=(say1+say5-say3-say7);
for(int i=0;i<2;i++){
        printf("\n");
    for(int j=0;j<2;j++){
        printf("%d ",strassendizi[i][j]);
    }
}
return 0;
}
