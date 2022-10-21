import java.util.Scanner;

public class MAİN8 {
    public static void main(String[] args) {
        int k1, k2, k3, k4;
        Scanner scann = new Scanner(System.in);

        System.out.print("1. kenar uzunluğu giriniz:");
        k1 = scann.nextInt();
        System.out.print("2. kenar uzunluğu giriniz:");
        k2 = scann.nextInt();
        System.out.print("3. kenar uzunluğu giriniz:");
        k3 = scann.nextInt();
        System.out.print("4. kenar uzunluğu giriniz:");
        k4 = scann.nextInt();

        if (k1 == k2 && k1 == k3 && k1 == k4) {
            System.out.println("Şekil bir karedir.");
        } else if ((k1 == k2 && k3 == k4) || (k1 == k3 && k2 == k4) || (k1 == k4 && k2 == k3)) {
            System.out.println("Şekil bir dikdörtgendir.");
        } else {
            System.out.println("Şekil kare veya dikdörtgen değildir.");
        }
    }
}
