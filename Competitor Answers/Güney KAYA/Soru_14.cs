using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] dizi1 = { 3, 5, 7 };
            int[] dizi2 = { 6, 8, 3 };
            int[] dizi3 = { 1, 4, 9 };
            matrisTranspoze(dizi1, dizi2, dizi3);
        }
        static void matrisTranspoze(int[] a, int[] b, int[] c)
        {
            int[,] matris = new int[3, 3];
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == 0)
                    {
                        matris[i, j] = a[j];
                    }
                    else if (i == 1)
                    {
                        matris[i, j] = b[j];
                    }
                    else
                    {
                        matris[i, j] = c[j];
                    }
                }
            }

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
