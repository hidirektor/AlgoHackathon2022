#include <stdio.h>
int usAlma(int taban, int us){
    if(us>1){
        return taban * usAlma(taban,us-1);
    }
}
int main(){
int taban, us;
printf("Ussunu almak istediginiz sayiyi giriniz: \n");
scanf("%d",&taban);
printf("Sayinin ussunu giriniz: \n");
scanf("%d",&us);
printf("%d'nin %d ussu = %d",taban,us,usAlma(taban,us));
return 0;
}
