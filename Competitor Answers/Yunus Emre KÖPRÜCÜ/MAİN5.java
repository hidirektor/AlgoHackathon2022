import java.util.Scanner;

public class MAİN5 {
    public static void main(String[] args) {
        int[][] dizi1 = new int[2][2];
        int[][] dizi2 = new int[2][2];
        Scanner scann = new Scanner(System.in);
        int i, j;
        System.out.println("1.dizi için veri girişi yapın");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                dizi1[i][j] = scann.nextInt();
            }
        }
        System.out.println("\n2.dizi için veri girişi yapın");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                dizi2[i][j] = scann.nextInt();
            }
        }

        int p1, p2, p3, p4, p5, p6, p7;
        p1 = dizi1[0][0] * (dizi2[0][1] - dizi2[1][1]);
        p2 = dizi2[1][1] * (dizi1[0][0] + dizi1[0][1]);
        p3 = dizi2[0][0] * (dizi1[1][0] + dizi1[1][1]);
        p4 = dizi1[1][1] * (dizi2[1][0] - dizi2[0][0]);
        p5 = (dizi1[0][0] + dizi1[1][1]) * (dizi2[0][0] + dizi2[1][1]);
        p6 = (dizi1[0][1] - dizi1[1][1]) * (dizi2[1][0] + dizi2[1][1]);
        p7 = (dizi1[0][0] - dizi1[1][0]) * (dizi2[0][0] + dizi2[0][1]);

        int[][] diziSON = new int[2][2];
        diziSON[0][0] = p5 + p4 - p2 + p6;
        diziSON[0][1] = p1 + p2;
        diziSON[1][0] = p3 + p4;
        diziSON[1][1] = p1 + p5 - p3 - p7;

        System.out.println("2 matrisin çarpılmış hali\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                System.out.print(diziSON[i][j] + " ");
            }
            System.out.println();
        }

    }
}
