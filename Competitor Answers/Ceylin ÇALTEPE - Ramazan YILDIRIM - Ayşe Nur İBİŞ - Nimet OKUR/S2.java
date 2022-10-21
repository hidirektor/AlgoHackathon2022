package hackathonytk;

import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.Set;

public class S2 {
    public static void silme(int dizi[]) {
        Set<Integer> stringFormat = new LinkedHashSet<Integer>();
        for(int i=0; i<dizi.length;i++) {
            stringFormat.add(dizi[i]);
        }
        System.out.println(stringFormat);
    }
    
    public static void main(String[] args){
        int[] dizi1 = {8, 10, 19, 6, 17 ,14 ,15, 2};
        int[] dizi2 = {17, 18, 11, 2, 10, 4, 15, 3};
        int[] dizi3 = {11, 2, 9, 19, 20, 10, 12, 14};
        int[] dizi4 = new int[16];
        int[] sonDizi = new int[24];
        
        System.arraycopy(dizi1, 0, dizi4, 0, dizi1.length);
        System.arraycopy(dizi2, 0, dizi4, 8, dizi2.length);
        System.arraycopy(dizi4, 0, sonDizi, 0, dizi4.length);
        System.arraycopy(dizi3, 0, sonDizi, 16, dizi3.length);
        
        silme(sonDizi);
    }
}
