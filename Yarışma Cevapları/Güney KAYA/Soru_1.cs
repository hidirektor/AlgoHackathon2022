using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(UsAl(2, 5));
        }
        static int UsAl(int taban, int us)
        {

            if (us == 0)
            {
                return 1;
            }
            else
            {
                return taban * UsAl(taban, us - 1);
            }
        }
    }
}
