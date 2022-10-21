public class MAİN2 {
    public static void main(String[] args) {
        int[] dizi1 = { 8, 10, 19, 6, 17, 14, 15, 2 };
        int[] dizi2 = { 17, 18, 11, 2, 10, 4, 15, 3 };
        int[] dizi3 = { 11, 2, 9, 19, 20, 10, 12, 14 };
        int[] diziSon = new int[24];
        int i, j = 0;
        for (i = 0; i < 16; i++) {
            if (i < 8) {
                diziSon[i] = dizi1[i];
            } else {
                diziSon[i] = dizi2[j];
                j++;
            }

        }
        j = 0;
        for (i = 16; i < 24; i++) {
            diziSon[i] = dizi3[j];
            j++;
        }
        // dizi birleşmi kontrol
        for (i = 0; i < 24; i++)
            System.out.print(diziSon[i] + " ");

        int swap;
        for (i = 0; i < 24; i++) {
            for (j = 0; j < 24; j++) {
                if (diziSon[i] < diziSon[j]) {
                    swap = diziSon[i];
                    diziSon[i] = diziSon[j];
                    diziSon[j] = swap;
                }
            }
        }
        // sıralama kontrol
        System.out.println("\n");
        for (i = 0; i < 24; i++)
            System.out.print(diziSon[i] + " ");

        // silme
        int[] array = new int[24];
        int bos = 0;
        i = 0;
        for (j = 0; j < 23; j++) {
            i++;
            if (diziSon[i] == diziSon[j]) {

            } else {
                array[bos] = diziSon[j];
                bos++;
            }
        }

        System.out.println("\n");
        for (i = 0; i < 14; i++)
            System.out.print(array[i] + " ");

    }
}
