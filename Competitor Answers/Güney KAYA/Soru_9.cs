using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(maxBul());
        }
        static string maxBul()
        {
            string max = "";
            int temp = 0;
            int m = 0;
            int[] array = { 129, 218, 110, 227, 120, 199, 400, 371, 237 };
            int[] ayrıkArray = new int[27];
            // 3 basamaklı sayıları tek tek rakamlarına ayırmak
            for (int k = 0; k < array.Length; k++)
            {
                int r = 0;
                while (array[k] > 0)
                {
                    r = array[k] % 10;
                    ayrıkArray[m] = r;
                    array[k] = array[k] / 10;
                    m++;
                }
            }
            //ayrılan rakamları büyükten küçüğe sıralamak
            for (int i = 1; i < ayrıkArray.Length; i++)
            {
                if (ayrıkArray[i - 1] < ayrıkArray[i])
                {
                    temp = ayrıkArray[i];
                    ayrıkArray[i] = ayrıkArray[i - 1];
                    ayrıkArray[i - 1] = temp;
                    i = 0;
                }
            }
            for (int j = 0; j < ayrıkArray.Length; j++)
            {
                max += ayrıkArray[j];
            }
            return max;
        }
    }
}
