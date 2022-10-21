import java.util.Scanner;
public class MAİN1 {
    
    public class main {
        public static void main(String[] args) {
            int taban, us, sonuc;
            Scanner scan = new Scanner(System.in);
            System.out.println("Taban ve us değerlerini girin");
            taban = scan.nextInt();
            us = scan.nextInt();
            sonuc = usAlma(taban, us);
            System.out.println("Sonuç:" + sonuc);
        }
    
        public static int usAlma(int x, int y) {
            if (y == 0)
                return 1;
            else if (x == 1)
                return 1;
            else
                return x * usAlma(x, y - 1);
        }
}
}