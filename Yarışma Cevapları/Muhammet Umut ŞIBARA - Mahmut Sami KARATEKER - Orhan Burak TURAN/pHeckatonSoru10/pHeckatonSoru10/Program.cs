using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pHeckatonSoru10
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Sil();
            Console.ReadLine();
        }
        static void Sil()
        {
            string girilenDeger;
            int sayac = 0;
            do
            {
                sayac = 0;
                Console.WriteLine("Lütfen 30 harften az olacak şekilde bir değer giriniz.");
                girilenDeger = Console.ReadLine();
                foreach (char item in girilenDeger)
                {
                    sayac++;
                }
            } while (sayac > 30);
            char[] girilenDeger1 = new char[sayac];
            int sayac2 = 0;
            foreach (char item in girilenDeger)
            {
                if (girilenDeger1.Contains(item))
                {

                }
                else
                {
                    girilenDeger1[sayac2] = item;
                    sayac2++;
                }
            }
            foreach (char item in girilenDeger1)
            {
                Console.Write(item);
            }
            
        }
    }
}
