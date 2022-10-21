using System;

namespace Soru3
{
    class Program
    {
        static void Main(string[] args)
        {
            string girilenSayi;
            int Sayac1 = 0;
            char kontrol = ' ';
            Console.WriteLine("Bir sayı giriniz.");
            girilenSayi = Console.ReadLine();
            char[] harfler = new char[girilenSayi.Length];
            int Sayac2 = girilenSayi.Length;
            foreach (char f in girilenSayi)
            {
                harfler[Sayac1] = f;
                Sayac1 = Sayac1 + 1;
            }
            foreach (char k in girilenSayi)
            {
                if (k==harfler[Sayac2-1])
                {
                    kontrol = 'D';
                }
                else
                {
                    kontrol = 'Y';
                }
                Sayac2 = Sayac2 - 1;
            }
            if (kontrol=='D')
            {
                Console.WriteLine("Palindrom Sayı");
            }
            else
            {
                Console.WriteLine("Palindrom Sayı DEĞİL");
            }
        }
    }
}
