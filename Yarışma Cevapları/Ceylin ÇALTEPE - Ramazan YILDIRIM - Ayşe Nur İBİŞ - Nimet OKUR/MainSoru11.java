
public class MainSoru11 {
    public static void main(String[] args) {
        int[] dizi = {50, 43, 987, 123, 67, 84, 176, 341, 674, 121, 243, 305, 192, 1203};

        int sum = 0;

        for (int i = 0; i < dizi.length; i++) {
            for (int j = 0; j < dizi.length; j++) {
                if (dizi[i] < dizi[j]) {
                    int temp = dizi[i];
                    dizi[i] = dizi[j];
                    dizi[j] = temp;
                }
            }
        }
        for (int i : dizi) {
            System.out.print(i + " ");
        }
        sum= dizi[0]+dizi[1]+dizi[2];

        System.out.println();
        System.out.println("Dizideki üç elemanın minimum toplamları: " + sum);

    }
}
