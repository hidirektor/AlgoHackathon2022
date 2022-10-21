using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(byteSırala("Heil YTK"));
        }
        static string byteSırala(string metin)
        {
            string max = "";
            char temp;
            char[] array = new char[metin.Length];
            for (int k = 0; k < metin.Length; k++)
            {
                array[k] = metin[k];
            }
            for (int i = 1; i < array.Length; i++)
            {
                if (array[i - 1] > array[i])
                {
                    temp = array[i];
                    array[i] = array[i - 1];
                    array[i - 1] = temp;
                    i = 0;
                }
            }
            for (int j = 0; j < array.Length; j++)
            {
                max += Convert.ToInt32(array[j]);
            }
            return max;
        }
    }
}
