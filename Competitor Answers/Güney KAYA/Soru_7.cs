using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(ArtıkYılMı(2021));
        }
        static bool ArtıkYılMı(int yıl)
        {
            if (getRemeinder(yıl,4) == 0)
            {
                return true;
            }
            else
                return false;
        }
        static int getRemeinder(int a, int b)
        {
            return a - ((a / b) * b);
        }
    }
}
