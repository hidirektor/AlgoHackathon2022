package s7;

import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int m=0;
		Scanner input =new Scanner(System.in);
		System.out.println("Lütfen bir yıl giriniz");
		int s= input.nextInt();
		while(m<s) {
			m++;
			if(m>s) {
				break;
			}
		}
		if(m%4==0) {
			System.out.println("Artık yıl");
		}else {
			System.out.println("artık değil");
		}
		
	}

}
