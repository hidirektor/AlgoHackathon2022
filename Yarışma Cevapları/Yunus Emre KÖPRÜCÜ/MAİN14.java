import java.util.Scanner;

public class MAİN14 {
    public static void main(String[] args) {
        int[] dizi1 = new int[3];
        int[] dizi2 = new int[3];
        int[] dizi3 = new int[3];
        int[][] diziMAtris = new int[3][3];
        int[][] diziMAtris2 = new int[3][3];
        Scanner scann = new Scanner(System.in);
        int i, j;
        // veri girişi
        System.out.println("1.dizi için veri girişi yapın");
        for (i = 0; i < 3; i++) {
            dizi1[i] = scann.nextInt();
        }

        System.out.println("2.dizi için veri girişi yapın");
        for (i = 0; i < 3; i++) {
            dizi2[i] = scann.nextInt();
        }

        System.out.println("3.dizi için veri girişi yapın");
        for (i = 0; i < 3; i++) {
            dizi3[i] = scann.nextInt();
        }
        // matrise çevirme
        for (i = 0; i < 3; i++) {
            diziMAtris[0][i] = dizi1[i];
            diziMAtris[1][i] = dizi2[i];
            diziMAtris[2][i] = dizi3[i];
        }

        // transpozesi

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (i == 2 && j == 2) {
                    diziMAtris2[j][i] = diziMAtris[i][j];
                } else
                    diziMAtris2[j][i] = diziMAtris[i][j];
            }
        }
        System.out.println();
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                System.out.print(diziMAtris2[i][j] + " ");
            }
            System.out.println();
        }

    }
}
