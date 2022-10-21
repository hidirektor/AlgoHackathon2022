package s8;

import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	
		int s1;
		int s2;
		int s3;
		int s4;
		Scanner s=new Scanner(System.in);
		System.out.println("Lüttfen ilk kenarı giriniz");
		s1=s.nextInt();
		System.out.println("Lüttfen ikinci kenarı giriniz");
		s2=s.nextInt();
		System.out.println("Lüttfen üçüncü kenarı giriniz");
		s3=s.nextInt();
		System.out.println("Lüttfen dördüncü kenarı giriniz");
		s4=s.nextInt();
		
		if(s1==s2&&s3==s4) {
			if(s1==s3) {
				System.out.println("bu bir karedir");
			}
			else System.out.println("bu bir dikdörtgen");
		}else if(s2==s3&&s1==s4) {
			if(s1==s3) {
				System.out.println("bu bir karedir");
			}
			else System.out.println("bu bir dikdörtgen");
			
		}else if(s1==s3&&s2==s4) {
			if(s1==s4) {
				System.out.println("bu bir karedir");
			}
			else System.out.println("bu bir dikdörtgen");
		}else System.out.println("dikdörtgen veya kare değil");
		
		
	}

}
