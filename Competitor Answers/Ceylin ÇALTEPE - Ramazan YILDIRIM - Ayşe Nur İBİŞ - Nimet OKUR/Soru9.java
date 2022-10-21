public class Soru9 {
    public static void main(String[] args) {
        int[] dizi = {129, 218, 110, 227, 120, 199, 400, 371, 237};
        int sayi1, sayi2, sayi3, max1, max2, max3;
        for (int j = 0; j < 9; j++) {
            sayi1 = dizi[j] / 100;
            sayi2 = (dizi[j] - 100) / 10;
            sayi3 = dizi[j] % 10;

            if ((sayi1 < sayi2) && (sayi2 < sayi3)) {
                max1 = sayi3;
                if (sayi1 < sayi2) {
                    max2 = sayi2;
                } else {
                    max2 = sayi1;
                    max1 = sayi3;
                }
            }
            if (sayi3 > max1) {
                max1 = sayi3;
            }
            System.out.println(max1);

            dizi[j] = (max1 * 100) + (max2 * 10) + max3;
            System.out.println(dizi[j]);
        }


    }


}
}
        }
