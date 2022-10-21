import java.util.Scanner;

public class MAİN3 {

    public static void main(String[] args) {
        int sayi = 0;
        Scanner scann = new Scanner(System.in);
        System.out.println("3 basamaklı bir sayi giriniz:");
        sayi = scann.nextInt();

        int birler, onlar, yuzler;
        if(sayi>100)
        {
             birler = sayi % 10;
            onlar = (sayi % 100 - birler) / 10;
            yuzler = (sayi - onlar * 10 - birler) / 100;

            int yeniSayi = birler * 100 + onlar * 10 + yuzler;

            if (sayi == yeniSayi) {
                System.out.println("Girdiğiniz sayi bir palindrom sayısıdır");
            } else {
                System.out.println("Girdiğiniz sayı palindrom sayiyisi değildir");
            }
        }
        else if(sayi<100)
        {
            birler=sayi%10;
            onlar = (sayi % 100 - birler) / 10;
            int yeniSayi = birler*10+onlar;
            if (sayi == yeniSayi) {
                System.out.println("Girdiğiniz sayi bir palindrom sayısıdır");
            } else {
                System.out.println("Girdiğiniz sayı palindrom sayiyisi değildir");
            }
        }
        
    }
}
