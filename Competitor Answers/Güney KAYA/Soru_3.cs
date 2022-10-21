using System;

namespace Hackathon_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int r, sum = 0, temp;

            int n = 32023;

            temp = n;


            while (n > 0)
            {
                r = n % 10;
                sum = (sum * 10) + r;
                n = n / 10;
            }

            if (temp == sum)
            {
                Console.WriteLine("palindrom: " + temp);
            }
        }
    }
}
