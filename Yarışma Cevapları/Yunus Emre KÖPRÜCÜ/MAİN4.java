public class MAİN4 {
    public static void main(String[] args) {
        int[][] dizi = new int[3][3];
        dizi[0][0] = 3;
        dizi[0][1] = 5;
        dizi[0][2] = 7;
        dizi[1][0] = 6;
        dizi[1][1] = 8;
        dizi[1][2] = 3;
        dizi[2][0] = 1;
        dizi[2][1] = 4;
        dizi[2][2] = 9;
        int[][] diziSon = new int[3][3];
        int i, j;

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (i == 2 && j == 2) {
                    diziSon[j][i] = dizi[i][j];
                } else
                    diziSon[j][i] = dizi[i][j];
            }
        }

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                System.out.print(diziSon[i][j] + " ");
            }
            System.out.println();
        }

    }
}
