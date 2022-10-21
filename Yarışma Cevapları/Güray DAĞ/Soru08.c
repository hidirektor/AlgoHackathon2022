#include <stdio.h>
int main(){
int kenar1,kenar2,kenar3,kenar4;
printf("Birinci kenari giriniz:\n");
scanf("%d",&kenar1);
printf("Ikinci kenari giriniz:\n");
scanf("%d",&kenar2);
printf("Ucuncu kenari giriniz:\n");
scanf("%d",&kenar3);
printf("Dorduncu kenari giriniz:\n");
scanf("%d",&kenar4);

if(kenar1==kenar2 && kenar1==kenar3 && kenar1==kenar4){
    printf("\nKaredir");
}
else{
    printf("\nDikdortgendir.");
}


return 0;
}
