#include <stdio.h>
#include <stdlib.h>

void KareDikdortgen(int a,int b,int c,int d){
	if(a==b!=0&&a==c!=0&&a==d!=0)
	{
		printf("Karedir");
	}
  
    else if((a==b!=0&&c==d!=0&&a!=c)||(a==c!=0&&b==d!=0&&a!=b)||a==d!=0&&b==c!=0&&a!=b)
    {
    	printf("Dikdörtgendir");	
	}
	
	else
	printf("Hatali Giris!");
}

int main()
{
printf("Kenar Uzunluklarýný Giriniz:");
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);	
KareDikdortgen(a,b,c,d);	
}
