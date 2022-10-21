using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pHeckatonSoru2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] dizi1 = new int[8] { 8, 10, 19, 6, 17, 14, 15, 2 };
            int[] dizi2 = new int[8] { 17, 18, 11, 2, 10, 4, 15, 3 };
            int[] dizi3 = new int[8] { 11, 2, 9, 19, 20, 10, 12, 14 };

            int[] diziKarısım = new int[17];
            int[] diziKarısımson = new int[17];

            int[] diziKarısım1 = new int[17];
            int[] diziKarısımson1 = new int[17];

            int[] diziKarısım2 = new int[17];
            int[] diziKarısımson2 = new int[17];

            for (int i = 0; i < 8; i++)
            {
                diziKarısım[i] = dizi1[i];
            }

            int sayac = 0;
            for (int a = 8; a < 16; a++)
            {
                diziKarısım[a] = dizi2[sayac];
                sayac++;
            }

            for (int i = 0; i < 8; i++)
            {
                diziKarısım1[i] = dizi1[i];
            }

            sayac = 0;
            for (int a = 8; a < 16; a++)
            {
                diziKarısım1[a] = dizi3[sayac];
                sayac++;
            }

            for (int i = 0; i < 8; i++)
            {
                diziKarısım2[i] = dizi2[i];
            }

            sayac = 0;
            for (int a = 8; a < 16; a++)
            {
                diziKarısım2[a] = dizi3[sayac];
                sayac++;
            }

            int gecici = 0;
            for (int k = 0; k < 17; k++)
            {
                for (int j = 0; j < 17 - 1; j++)
                {
                    if (diziKarısım[j] < diziKarısım[j + 1])
                    {
                        gecici = diziKarısım[j];
                        diziKarısım[j] = diziKarısım[j + 1];
                        diziKarısım[j + 1] = gecici;
                    }
                }
            }

            gecici = 0;
            for (int k = 0; k < 17; k++)
            {
                for (int j = 0; j < 17 - 1; j++)
                {
                    if (diziKarısım1[j] < diziKarısım1[j + 1])
                    {
                        gecici = diziKarısım1[j];
                        diziKarısım1[j] = diziKarısım1[j + 1];
                        diziKarısım1[j + 1] = gecici;
                    }
                }
            }

            gecici = 0;
            for (int k = 0; k < 17; k++)
            {
                for (int j = 0; j < 17 - 1; j++)
                {
                    if (diziKarısım2[j] < diziKarısım2[j + 1])
                    {
                        gecici = diziKarısım2[j];
                        diziKarısım2[j] = diziKarısım2[j + 1];
                        diziKarısım2[j + 1] = gecici;
                    }
                }
            }

            sayac = 0;
            foreach (int item in diziKarısım)
            {
                if (diziKarısımson.Contains(item))
                {

                }
                else
                {
                    diziKarısımson[sayac] = item;
                    sayac++;
                }
            }

            sayac = 0;
            foreach (int item in diziKarısım1)
            {
                if (diziKarısımson1.Contains(item))
                {

                }
                else
                {
                    diziKarısımson1[sayac] = item;
                    sayac++;
                }
            }

            sayac = 0;
            foreach (int item in diziKarısım2)
            {
                if (diziKarısımson2.Contains(item))
                {

                }
                else
                {
                    diziKarısımson2[sayac] = item;
                    sayac++;
                }
            }

            for (int i = 16; i > 0; i--)
            {
                if (diziKarısımson[i] != 0)
                {
                    Console.Write("{0}<", diziKarısımson[i]);
                }
            }

            Console.WriteLine();

            for (int i = 16; i > 0; i--)
            {
                if (diziKarısımson1[i] != 0)
                {
                    Console.Write("{0}<", diziKarısımson1[i]);
                }
            }

            Console.WriteLine();

            for (int i = 16; i > 0; i--)
            {
                if (diziKarısımson2[i] != 0)
                {
                    Console.Write("{0}<", diziKarısımson2[i]);
                }
            }
            Console.ReadLine();
        }
    }
}
