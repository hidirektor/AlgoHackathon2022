public class Soru6 {
    public static void main(String[] args) {
        int sayac = 0, carpan, mukemmelSayi;
        for (int sayi = 2; sayi <= 500; sayi++) {
            int kontrol = 0;
            carpan = (int) (Math.pow(2, sayi) - 1);
            for (int i = 2; i < sayi / 2; i++) {
                if ((sayi % i == 0)) {
                    kontrol = 1;
                    break;
                }
            }
            if (kontrol == 0) {
                sayac++;
                mukemmelSayi = carpan * (int) Math.pow(2, sayi - 1);
                System.out.println(mukemmelSayi);

            }

        }


    }
}
