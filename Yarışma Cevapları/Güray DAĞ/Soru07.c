#include <stdio.h>
int main(){
printf("Artik yil kontrolu icin yili giriniz:\n");
int yil;
scanf("%d",&yil);
if(yil%4==0){
    printf("Girdiginiz yil artik yildir!");
}
else{
    printf("Girdiginiz yil artik yil degildir.");
}
return 0;
}
