import java.util.Scanner;
public class MainSoru3 {

    static boolean isPalindrom(int number){

        int temp=number,reverseNumber=0,lastNumber;

        while(temp != 0){
            lastNumber= temp % 10;
            reverseNumber=(reverseNumber * 10) + lastNumber;
            temp /= 10;
        }
        if (number==reverseNumber){
            System.out.println(number + " = " +reverseNumber);
            System.out.println("Girdiğiniz sayı bir palindrom sayıdır.");
            return true;
        }
        else {
            System.out.println(number + " != " +reverseNumber);
            System.out.println("Girdiğiniz sayı bir palindrom sayı değildir.");
            return false;
        }

    }

    public static void main(String[] args) {

        Scanner inp= new Scanner(System.in);
        System.out.print("Bir sayı giriniz: ");
        int sayi = inp.nextInt();
        isPalindrom(sayi);

    }
}