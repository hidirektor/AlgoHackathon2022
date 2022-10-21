using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] matris = { { 3, 5, 7 }, { 6, 8, 3 }, { 1, 4, 9 } };
            transpoze(matris);
        }
        static void transpoze(int[,] a)
        {
            int temp = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = i; j < 3; j++)
                {
                    if (i != j)
                    {
                        temp = a[i, j];
                        a[i, j] = a[j, i];
                        a[j, i] = temp;
                    }
                }
            }
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    Console.Write(a[k, l]);
                }
                Console.WriteLine("\n");
            }
        }
    }
}
