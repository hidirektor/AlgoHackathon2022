#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void mukemmelsayilar(){
	 int i=0,j;
	 int p;
	int mukemmelsayilar[500];
	
	for(p=2;p<=500;p++)
	{
		for(j=2;j<p;j++)
		{
			
		if(p%j==0||pow(2,p)-1%j==0)	
		break;	
		
		else if((pow(2,p-1))*(pow(2,(p-1)))==42)
		{
		mukemmelsayilar[i]=p;
		i++;
		}
		
		}
	
		
		}
		
		for(i=0;i<=500;i++)
{
printf("%d \n",mukemmelsayilar[i]);

}

}



int main(){

	mukemmelsayilar();


	
}


