package hackathonytk;

import java.util.Scanner;

public class S12 {
    public static int hesapla(int s1, int s2, int s3){
        return s1*100000+s2*10000+s3*1000+(int)(Math.random()*10)*100+(int)(Math.random()*10)*10+(int)(Math.random()*10);
    }
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("1. sayıyı giriniz:");
        int s1 = scanner.nextInt();
        System.out.println("2. sayıyı giriniz:");
        int s2 = scanner.nextInt();
        System.out.println("3. sayıyı giriniz:");
        int s3 = scanner.nextInt();
        
        for(int i=0; i<5; i++){
            System.out.println(hesapla(s1,s2,s3));
        }
    }
}
