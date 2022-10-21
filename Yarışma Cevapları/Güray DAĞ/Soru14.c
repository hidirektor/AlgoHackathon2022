#include <stdio.h>
int main(){
int dizi1[3];
int dizi2[3];
int dizi3[3];
for(int i=0;i<3;i++){
    printf("1. dizinin %d. sayisini giriniz:",i+1);
    scanf("%d",&dizi1[i]);
}
for(int i=0;i<3;i++){
    printf("2. dizinin %d. sayisini giriniz:",i+1);
    scanf("%d",&dizi2[i]);
}
for(int i=0;i<3;i++){
    printf("3. dizinin %d. sayisini giriniz:",i+1);
    scanf("%d",&dizi3[i]);
}
int yeniDizi[3][3];
for(int j=0;j<3;j++){
        yeniDizi[0][j] = dizi1[j];
}
for(int j=0;j<3;j++){
        yeniDizi[1][j] = dizi2[j];
}
for(int j=0;j<3;j++){
        yeniDizi[2][j] = dizi3[j];
}
for(int k=0;k<3;k++){
        printf("\n");
    for(int l=0;l<3;l++){
        printf("%d ",yeniDizi[k][l]);
    }
}
printf("\n--------------");
int yeniDizi2[3][3];
for(int i=0;i<3;i++){
        printf("\n");
    for(int j=0;j<3;j++){
        yeniDizi2[i][j]=yeniDizi[j][i];
        printf("%d ",yeniDizi2[i][j]);
    }
}
return 0;
}
