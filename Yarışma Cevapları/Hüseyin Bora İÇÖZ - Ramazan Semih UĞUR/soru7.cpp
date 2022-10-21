#include <stdio.h>
#include <stdlib.h>



int main(){
int yil;
	
	printf("Lutfen Yil Degerini Giriniz:");
	scanf("%d",yil);
	
	while(yil>0)
	{
	yil-=4;	
}

if(yil==0)
printf("Yildir");
else
printf("Degildir");	
	
}




