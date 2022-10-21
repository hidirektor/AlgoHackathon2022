import java.util.Scanner;

public class MAİN7 {
    public static void main(String[] args) {
        int sayi;
        Scanner scann = new Scanner(System.in);
        System.out.print("Yıl giriniz:");
        sayi = scann.nextInt();
        int check = 0;
        while (sayi >= 0) {
            sayi -= 4;
            if (sayi == 0) {
                check = 1;
                break;
            }
        }
        if (check == 1) {
            System.out.println("Artık Yıldasınız");
        } else
            System.out.println("Artık yılda değilsiniz");

    }
}
