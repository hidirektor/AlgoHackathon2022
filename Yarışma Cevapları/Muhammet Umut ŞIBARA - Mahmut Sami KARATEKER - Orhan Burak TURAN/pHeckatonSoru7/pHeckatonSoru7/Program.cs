using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pHeckatonSoru7
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Bir yıl giriniz.");
            int int_girilenYil = Convert.ToInt32(Console.ReadLine());
            double double_girilenYil = Convert.ToDouble(int_girilenYil);
            int_girilenYil = int_girilenYil / 4;
            double_girilenYil = double_girilenYil / 4;
            if (int_girilenYil == double_girilenYil)
            {
                Console.WriteLine("Artık yıldasınız.");
            }
            else
            {
                Console.WriteLine("Artık yılda değilsiniz");
            }
        }
    }
}
