#include <stdio.h>
int main(){
char metin[100];
printf("Sesli harfleri sildirmek istediginiz en az 9 karakterli metni giriniz:\n");
tekrar:
gets(metin);
if(strlen(metin)<9){
    printf("Lutfen en az 9 karakterli bir metin giriniz:\n");
    goto tekrar;
}
for(int i=0;i<strlen(metin);i++){
    if(metin[i]=='a' || metin[i]=='A' || metin[i]=='e' || metin[i]=='E' || metin[i]=='u' || metin[i]=='U' || metin[i]=='i' || metin[i]=='I' || metin[i]=='o' || metin[i]=='O' || metin[i]=='I' || metin[i]=='İ' || metin[i]=='ü' || metin[i]=='Ü' || metin[i]=='ö' || metin[i]=='Ö' ){
        metin[i]=' ';
    }
}
printf("%s",metin);
return 0;
}
