package s5;

import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner s=new Scanner(System.in);
		
		int a1,a2;
		int aa1,aa2;
		int b1,b2;
		int bb1,bb2;
		
		
	
		System.out.println("lütfen üstten 1.sayıyı yazın");
		a1=s.nextInt();
		System.out.println("lütfen üstten 2.sayıyı yazın");
		a2=s.nextInt();
		System.out.println("lütfen alttan 1.sayıyı yazın");
		aa1=s.nextInt();
		System.out.println("lütfen alttan 2.sayıyı yazın");
		aa2=s.nextInt();
		
		System.out.println("lütfen üstten 1.sayıyı yazın");
		b1=s.nextInt();
		System.out.println("lütfen üstten 2.sayıyı yazın");
		b2=s.nextInt();
		System.out.println("lütfen alttan 1.sayıyı yazın");
		bb1=s.nextInt();
		System.out.println("lütfen alttan 2.sayıyı yazın");
		bb2=s.nextInt();
		
		
		int i1=(b2-bb2)*a1;
		int i2=(a1+a2)*bb2;
		int i3=(aa1+aa2)*b1;
		int i4=(b1-bb1)*aa2;
		int i5=(a1+aa2)*(b1+bb2);
		int i6=(a2-aa2)*(bb1+bb2);
		int i7=(a1-aa1)*(b1+b2);
		
		System.out.print(i5+i4+(i2*-1)+i6+"  ");
		System.out.println(i1+i2);
		
		System.out.print(i3+i4+"  ");
		System.out.println(i1+i5+(i3*-1)+(i7*-1));
		
		
		
		
		
		
	}

}
