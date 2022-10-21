using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pHeckatonSoru13
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int sayac = 0;
            string girilenDeger;
            do
            {
                sayac = 0;

                Console.WriteLine("Lütfen 9 karakterli veya 9 karakterden fazla olan bir gelime giriniz");
                girilenDeger = Console.ReadLine();
                
                foreach (char item in girilenDeger)
                {                   
                    sayac++;
                }
            } while (sayac<9);
            char[] girilendegerC = new char[sayac];
            sayac = 0;
            foreach (char item in girilenDeger)
            {
                if (item != 'a'&&item!='A'&&item!='e'&&item!='E'&&item!='i' && item != 'I' && item != 'o' && item != 'O' && item != 'ö' && item != 'Ö' && item != 'İ' && item != 'ı' && item != 'u' && item != 'U' && item != 'ü' && item != 'Ü')
                {
                    girilendegerC[sayac] = item;
                }
                sayac++;
            }
            for (int i = 0; i < girilendegerC.Length; i++)
            {
                Console.Write(girilendegerC[i]);
            }
            Console.ReadLine();
        }
    }
}
//a e ı i o ö u Ü 
