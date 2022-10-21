using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            sayıÜret(987);
        }
        static void sayıÜret(int number)
        {
            Random rand = new Random();

            int ilkUc = number * 1000;
            int[] sayılar = new int[5];
            for (int i = 0; i < sayılar.Length; i++)
            {
                int sonUc = rand.Next(99, 1000);
                sayılar[i] = ilkUc + sonUc;
            }
            for (int j = 0; j < sayılar.Length; j++)
            {
                Console.WriteLine(sayılar[j]);
            }
        }
    }
}
