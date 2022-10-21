using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(minimum());
        }
        static int minimum()
        {
            int temp = 0;
            int sum = 0;
            int[] array = { 50, 43, 987, 123, 67, 84, 176, 341, 674, 121, 243, 305, 192, 1203 };
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
            for (int j = 0; j < 3; j++)
            {
                sum += array[j];
            }
            return sum;
        }
    }
}
