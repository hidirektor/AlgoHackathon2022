import java.util.Scanner;

public class MainSoru7 {

        public static void main(String[] args) {
            int year;

            String artik ="artik yildir";
            String artikDegil ="Artik Yil Degildir";

            Scanner input = new Scanner(System.in);

            System.out.print("Yili Giriniz : ");
            year = input.nextInt();

            if (year % 4 == 0) {
                if (year % 400 == 0) {
                    System.out.println(artik);
                } else if (year % 100 == 0) {
                    System.out.println(artikDegil);
                } else {
                    System.out.println(artik);
                }
            } else {
                System.out.println(artikDegil);
            }
        }
    }

