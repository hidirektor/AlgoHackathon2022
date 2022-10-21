#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
srand(time(NULL));	
int i,yuzbinler,onbinler,binler,yuzler,onlar,birler;
int sayilar[5];
for(i=1;i<=5;i++)	
	{
	  printf("%d.Sayinin Yuzbinler Basamagini Giriniz:",i);	
	  scanf("%d",&yuzbinler);	
	  printf("%d.Sayinin Onbinler Basamagini Giriniz:",i);	
	  scanf("%d",&onbinler);	
	  printf("%d.Sayinin Binler Basamagini Giriniz:",i);	
	  scanf("%d",&binler);	
	  printf("-------------------------------------------------\n");
	  printf("%d.Sayi Olusturuluyor:%d%d%d---\n",i,yuzbinler,onbinler,binler);
	  printf("-------------------------------------------------\n");
	  int yuzler=rand()%10,onlar=rand()%10,birler=rand()%10;
	  printf("%d.Sayi Olusturuldu:%d%d%d%d%d%d\n",i,yuzbinler,onbinler,binler,yuzler,onlar,birler);
	  printf("-------------------------------------------------\n");
	  sayilar[i-1]=yuzbinler*100000+onbinler*10000+binler*1000+yuzler*100+onlar*10+birler;	
		
		
	}
	
	for(i=0;i<5;i++)
	{
		
		printf("%d.Sayi:%d\n",i+1,sayilar[i]);
		
	}
	
}
