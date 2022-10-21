using System;

namespace Soru15
{
    class Program
    {
        static void Main(string[] args)
        {
            int Sayac1 = 0;
            Console.Write("Bir Değer Giriniz");
            string girilenDeger = Console.ReadLine();
            int[] diziSayilar = new int[girilenDeger.Length];
            int[] diziSiralanmis = new int[girilenDeger.Length];

            foreach (char c in girilenDeger)
            {
                diziSayilar[Sayac1] = Convert.ToInt32(c);
                diziSiralanmis[Sayac1] = Convert.ToInt32(c);
                Sayac1 = Sayac1 + 1;

            }
            int gecici = 0;
            for (int k = 0; k < girilenDeger.Length-1; k++)
            {
                for (int j = 0; j < girilenDeger.Length - 1 ; j++)
                {
                    if (diziSiralanmis[j]<diziSiralanmis[j+1])
                    {
                        gecici = diziSiralanmis[j];
                        diziSiralanmis[j] = diziSiralanmis[j + 1];
                        diziSiralanmis[j + 1] = gecici;
                    }
                }
            }
            for (                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  int i = girilenDeger.Length-1; i >= 0; i--)
            {
                Console.WriteLine(diziSiralanmis[i]);
                //Console.WriteLine(diziSayilar[i]);
            }
            Console.ReadKey();
        }
    }
}
