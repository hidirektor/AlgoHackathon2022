public class MainSoru4 {
    public static void main(String[] args) {
        int j = 0;
        int[][] matris = {
                {3, 5, 7},
                {6, 8, 3},
                {1, 4, 9},};

        for (int i = 0; i < matris.length; i++) {
            System.out.print(matris[i][j] + " ");
        }
        System.out.println();

        for (int i = 0; i < matris.length; i++) {
            j = 1;
            System.out.print(matris[i][j] + " ");
        }
        System.out.println();

        for (int i = 0; i < matris.length; i++) {
            j = 2;
            System.out.print(matris[i][j] + " ");
        }
    }
}
