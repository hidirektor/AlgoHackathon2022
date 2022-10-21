#include <stdio.h>
#include <time.h>
int main(){
srand(time(NULL));
int sayi[5];
for(int i=0;i<5;i++){
    printf("%d. sayinin ilk 3 basamagini giriniz: ",i+1);
    scanf("%d",&sayi[i]);
}
for(int i=0;i<5;i++){
        sayi[i] *= 1000;
    sayi[i] += rand()%1000;
}
printf("\n");
for(int i=0;i<5;i++){
    printf("%d. sayi = %d\n",i+1,sayi[i]);
}
return 0;
}
