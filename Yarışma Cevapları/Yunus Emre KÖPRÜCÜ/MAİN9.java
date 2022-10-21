public class MAİN9 {
    public static void main(String[] args) {
        int[] dizi = { 129, 218, 110, 227, 120, 199, 400, 371, 237 };
        int[] diziYuzler = new int[9];
        int[] diziOnlar = new int[9];
        int[] diziBirler = new int[9];
        int[] diziSON = new int[27];
        int yuzler, onlar, birler;
        for (int i = 0; i < 9; i++) {
            yuzler = dizi[i] / 100;
            birler = dizi[i] % 10;
            onlar = (dizi[i] % 100 - birler) / 10;

            diziBirler[i] = birler;
            diziOnlar[i] = onlar;
            diziYuzler[i] = yuzler;
        }
        int k = 0, j = 0;
        for (int i = 0; i < 27; i++) {
            if (i < 9) {
                diziSON[i] = diziBirler[i];
            } else if (i >= 9 && i < 18) {
                diziSON[i] = diziOnlar[k];
                k++;
            } else {
                diziSON[i] = diziYuzler[j];
                j++;
            }
        }
        
        // yukarıda diziyi elde etmeye çalıştım
        int swap;
        for (int i = 0; i < 27; i++) {
            for (j = 0; j < 27; j++) {
                if (diziSON[i] > diziSON[j]) {
                    swap = diziSON[i];
                    diziSON[i] = diziSON[j];
                    diziSON[j] = swap;
                }
            }
        }

        for (int i = 0; i < 27; i++) {
            System.out.print(diziSON[i]);
        }
    }
}
