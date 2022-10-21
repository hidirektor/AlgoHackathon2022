#include <stdio.h>
int main(){
char array[29];
printf("Ayni harfleri sildiren program icin maksimum 30 karakterli bir metin giriniz.\n");
scanf("%s",&array);
for(int i=0;i<29;i++){
    for(int j=1;j<29;j++){
        if(array[i]==array[j] && i!=j ){
            array[j]=' ';
        }
    }
}
printf("\n%s",array);
return 0;
}
