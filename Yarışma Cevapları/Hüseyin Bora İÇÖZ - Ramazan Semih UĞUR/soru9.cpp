#include <stdio.h>
#include <stdlib.h>


int main(){
int sayilar[9]={129,218,110,227,120,199,400,371,237};	
int birler,yuzler,onlar,i,j;
int basamak[27],gecici;	
int c=0;	
	for(i=0;i<9;i++)
	{
        yuzler=sayilar[i]/100;
		onlar=(sayilar[i]-yuzler*100)/10;
		birler=(sayilar[i]-yuzler*100-onlar*10);
		
		basamak[c]=yuzler;
		basamak[c+1]=onlar;
		basamak[c+2]=birler;
		c+=3;
	}
	
	
for(i=0; i<26; i++) {

for(j=0; j<26; j++) {

if( basamak[j]<basamak[j+1] )
{ 
gecici = basamak[j];
basamak[j] = basamak[j+1];
basamak[j+1] = gecici;}
}
}
for(i=0;i<27;i++)
{
printf("%d",basamak[i]);	
}
}

