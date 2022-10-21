package hackathonytk;

import java.util.ArrayList;
import java.util.Scanner;

public class S13 {
    public static void sesliHarfSil(String metin){
        char[] sesli = {'a', 'e', 'i', 'o', 'u'};
        char[] str = metin.toCharArray();
        
        for(int i=0; i<str.length; i++){
            for(char c: sesli){
                if(str[i] == c)
                    str[i] = '\0';
            }
        }
        
        for(char c: str){
            System.out.print(c);
        }
    }
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Lütfen 9 karakterden uzun bir metin giriniz...");
        String metin = scanner.nextLine();
        while(metin.length()<9){
            System.out.println("Hata! Lütfen 9 karakterden uzun bir metin giriniz");
            metin = scanner.nextLine();
        }
        sesliHarfSil(metin);
        
    }
}
