using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("----a----");
            Console.WriteLine("|\t|\n|\t|\nd\tb\n|\t|\n|\t|");
            Console.WriteLine("----c----");

            sayıÜret(4, 4, 4, 4);
        }
        static void sayıÜret(int a, int b, int c, int d)
        {
            if (a == c && b == d)
            {
                if (a == b)
                {
                    Console.WriteLine("Karedir");
                }
                else
                {
                    Console.WriteLine("Diktörtgendir");
                }
            }
            else
            {
                Console.WriteLine("Böyle Bir Şekil Olamaz");
            }
        }
    }
}
