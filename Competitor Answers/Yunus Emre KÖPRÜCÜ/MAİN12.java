import java.util.Scanner;

public class MAİN12 {
    public static void main(String[] args) {

        int yzbinler, onbinler, binler, yuzler, onlar, birler;
        Scanner scann = new Scanner(System.in);
        int[] dizi = new int[5];
        int i;
        for (i = 0; i < 5; i++) {
            System.out.print((i + 1) + ".sayı için yüzbinler,onbinler,binler basamağını girin:");
            yzbinler = scann.nextInt();
            onbinler = scann.nextInt();
            binler = scann.nextInt();
            yuzler = (int) (Math.random() * 10 - 1);
            onlar = (int) (Math.random() * 10 - 1);
            birler = (int) (Math.random() * 10 - 1);
            dizi[i] = yzbinler * 100000 + onbinler * 10000 + binler * 1000 + yuzler * 100 + onlar * 10 + birler;
            System.out.println();
        }
        System.out.println("\n\nOluşan Sayılar");
        for (i = 0; i < 5; i++) {
            System.out.print(dizi[i] + " ");
        }

    }
}
