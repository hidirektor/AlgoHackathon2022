using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pHeckatonSoru9
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] sayılar = new int[9] { 129, 218, 110, 227, 120, 199, 400, 371, 237 };
            string[] sayılarS = new string[9];
            string[] say = new string[3];
            int[] sayi = new int[3];
            int sayac = 0;
            foreach (int fors in sayılar)
            {
                sayılarS[sayac] = fors.ToString();
                sayac++;
            }
            sayac = 0;
            foreach (char item in sayılarS[0])
            {
                say[sayac] = item.ToString();
                sayac++;
            }
            sayac = 0;
            foreach (string item in say)
            {
                sayi[sayac] = Convert.ToInt32(item);
                sayac++;
            }
            int gecici = 0;
            
            for (int i = 0; i < 8; i++)
            {
                sayac = 0;
                foreach (char item in sayılarS[i])
                {
                    say[sayac] = item.ToString();
                    sayac++;
                }
                sayac = 0;
                foreach (string item in say)
                {
                    sayi[sayac] = Convert.ToInt32(item);
                    sayac++;
                }
                gecici = 0;
                for (int k = 0; k < 3; k++)
                {
                    for (int j = 0; j < 3 - 1; j++)
                    {
                        if (sayi[j] < sayi[j + 1])
                        {
                            gecici = sayi[j];
                            sayi[j] = sayi[j + 1];
                            sayi[j + 1] = gecici;
                        }
                    }
                }
                foreach (int item in sayi)
                {
                    Console.Write(item);
                }
                Console.WriteLine();
            }
            Console.ReadLine();
        }
    }
}
