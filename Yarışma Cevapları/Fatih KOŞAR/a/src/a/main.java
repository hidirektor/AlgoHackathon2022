package a;

import java.util.Scanner;

public class main {
	public static void main(String[] args) {
		
	

	Scanner scan = new Scanner(System.in);
	
	int taban;
	int us;
	int s=0;
	int sonuc=1;
	System.out.print( "taban giriniz:  " );
	taban =scan.nextInt(); 
	System.out.print( "us giriniz: " );
	us  =scan.nextInt(); 
	
	while (us>s) {
		sonuc=sonuc*taban;
		s++;
		if (us<s) {
			break;
		}
		
	}
	System.out.println(sonuc);
}
}
