using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] dizi1 = { { 3, 5 }, { 6, 8 } };
            int[,] dizi2 = { { 8, 3 }, { 4, 9 } };
            Strassen(dizi1, dizi2);
        }
        static void Strassen(int[,] a, int[,] b)
        {
            int p1 = a[0, 0] * (b[0, 1] - b[1, 1]);
            int p2 = (a[0, 0] + a[0, 1]) * b[1, 1];
            int p3 = (a[1, 0] + a[1, 1]) * b[0, 0];
            int p4 = a[1, 1] * (b[1, 0] - b[0, 0]);
            int p5 = (a[0, 0] + a[1, 1]) * (b[0, 0] + b[1, 1]);
            int p6 = (a[0, 1] - a[1, 1]) * (b[1, 0] + b[1, 1]);
            int p7 = (a[0, 0] - a[1, 0]) * (b[0, 0] + b[0, 1]);

            int[,] matris = new int[2, 2];

            matris[0, 0] = p5 + p4 - p2 + p6;
            matris[0, 1] = p1 + p2;
            matris[1, 0] = p3 + p4;
            matris[1, 1] = p1 + p5 - p3 - p7;

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(matris[i, j] + " ");
                }
                Console.Write("\n");
            }
        }
    }
}
