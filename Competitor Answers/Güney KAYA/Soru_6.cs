using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            MükemmelSayı();
        }

        static void MükemmelSayı()
        {
            int birinciSayi = 0;
            int ikinciSayi = 0;
            for (int i = 2; i < 10; i++)
            {
                birinciSayi = usAl(2, i - 1);
                ikinciSayi = usAl(2, i) - 1;
                if (asal(i) && asal(ikinciSayi))
                {
                    Console.WriteLine(birinciSayi * ikinciSayi);
                }
            }
        }
        static bool asal(int number)
        {
            int div = 2;
            int temp;
            temp = number;

            while (number != 1)
            {
                if (getRemeinder(number, div) != 0) div++;
                else number = number / div;
            }
            if (temp == div)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        static int usAl(int a, int b)
        {
            for (int i = 0; i < b; i++)
            {
                a *= b;
            }
            return a;
        }
        static int getRemeinder(int a, int b)
        {
            return a - ((a / b) * b);
        }
    }
}
