import java.util.Scanner;

public class Soru8 {
    public static void main(String[] args) {
        int sayi1, sayi2, sayi3, sayi4;
        Scanner klavye = new Scanner(System.in);
        System.out.println("Kenar girin:");
        sayi1 = klavye.nextInt();

        System.out.println("Kenar girin:");
        sayi2 = klavye.nextInt();

        System.out.println("Kenar girin:");
        sayi3 = klavye.nextInt();

        System.out.println("Kenar girin:");
        sayi4 = klavye.nextInt();

        if ((sayi1 == sayi2) && (sayi3 == sayi4)) {
            System.out.println("karedir");
        } else if (((sayi1 == sayi3) && (sayi2 == sayi4))) {
            System.out.println("dikdörtgendir");
        } else if (((sayi1 == sayi4) && (sayi2 == sayi3))) {
            System.out.println("dikdörtgendir");
        }


    }
}