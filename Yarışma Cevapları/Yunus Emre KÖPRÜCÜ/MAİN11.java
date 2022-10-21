public class MAİN11 {

    public static void main(String[] args) {

        int[] dizi = { 50, 43, 987, 123, 67, 84, 176, 341, 674, 121, 243, 305, 192, 1203 };
        int enk1, enk2, enk3, i, j, swap;
        for (i = 0; i < 14; i++) {
            for (j = 0; j < 14; j++) {
                if (dizi[i] > dizi[j]) {
                    swap = dizi[i];
                    dizi[i] = dizi[j];
                    dizi[j] = swap;
                }
            }
        }

        enk1 = dizi[13];
        enk2 = dizi[12];
        enk3 = dizi[11];
        int toplam = enk1 + enk2 + enk3;
        System.out.println("En küçük 3 sayı:" + enk1 + "," + enk2 + "," + enk3 + " 'dir toplamları:" + toplam);
    }
}
