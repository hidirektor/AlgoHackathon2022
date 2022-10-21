using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FatihArslan
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<int> list1 = new List<int> { 1,2,3};    
            List<int> list2 = new List<int> { 4,5,6};
            List<int> list3 = new List<int> { 7,8,9};
            Soru14(list1, list2, list3);
            Console.ReadLine();
        }

        
        public static int Soru1(int taban, int us)
        {            
            if(us == 1)
            {
                return taban;
            }
            else if(us == 0)
            {
                return 1;
            }
            else
            {
                if (us / 2 == us / 2.0) // us ciftse
                {
                    return Soru1(taban * taban, us / 2);
                }
                else // us tekse
                {
                    return taban * Soru1(taban * taban, us / 2);
                }
            }
        }

        public static void Soru2()
        {
            List<int> dizi1= new List<int> { 8, 10, 19, 6, 17, 14, 15, 2};
            List<int> dizi2 = new List<int> { 17, 18, 11, 2, 10, 4, 15, 3 };
            List<int> dizi3 = new List<int> { 11, 2, 9, 19, 20, 10, 12, 14 };

            foreach(int i in dizi2)
            {
                if (!dizi1.Contains(i))
                {
                    dizi1.Add(i);
                }
            }
            foreach(int i in dizi3)
            {
                if (!dizi1.Contains(i))
                {
                    dizi1.Add(i);
                }
            }
            int[] arr = dizi1.ToArray();
            for(int i = 0; i < arr.Length; i++)
            {
                for(int j = i+1; j < arr.Length; j++)
                {
                    if(arr[i] > arr[j])
                    {
                        (arr[i], arr[j]) = (arr[j], arr[i]);
                    }
                }
            }
            string s = String.Join(" ", arr);
            Console.WriteLine(s);
        }

        public static bool Soru3(int n)
        {
            string s = n.ToString();
            for(int i = 0; i < s.Length; i++)
            {
                if(s[i] != s[s.Length - i -1])
                {
                    return false;
                }
            }
            return true;
        }

        public static void Soru4(List<List<int>> matris)
        {
            List<List<int>> transpoze = new List<List<int>>();
            for(int i = 0; i < matris.Count; i++)
            {
                List<int> l = new List<int>();
                for(int j = 0; j < matris[i].Count; j++)
                {
                    l.Add(matris[j][i]);
                }
                transpoze.Add(l);
            }
            for(int i = 0; i < transpoze.Count; i++)
            {
                string line = String.Join(", ", transpoze[i]);
                Console.WriteLine(line);
            }
        }

        public static void Soru5(List<List<int>> matris1, List<List<int>> matris2)
        {
            int a = matris1[0][0];
            int b = matris1[0][1];
            int c = matris1[1][0];
            int d = matris1[1][1];

            int e = matris2[0][0];
            int f = matris2[0][1];
            int g = matris2[1][0];
            int h = matris2[1][1];

            int p1 = a * (f - h);
            int p2 = (a + b) * h;
            int p3 = (c + d) * e;
            int p4 = d * (g - e);
            int p5 = (a + d) * (e + h);
            int p6 = (b - d) * (g + h);
            int p7 = (a - c) * (e + f);
            List<int> l1 = new List<int> { p5 + p4 - p2 + p6, p1 + p2};
            List<int> l2 = new List<int> { p3 + p4, p1 + p5 - p3 - p7 };
            List<List<int>> m = new List<List<int>> { l1, l2 };
            foreach (List<int> l in m)
            {
                string s = String.Join(", ", l);
                Console.WriteLine(s);
            }
        }

        public static string Soru6()
        {
            int carpanToplamiBul(int n)
            {
                int sum = 0;
                for (int i = 1; i < n; i++)
                {
                    if (n / i == n / (i * 1.0))
                    {
                        sum += i;
                    }
                }
                return sum;
            }
            List<int> matris = new List<int>();
            string s = "";
            for(int i = 2; i < 500; i++)
            {
                if(carpanToplamiBul(i) == i)
                {
                    s += i.ToString();
                    s += " ";
                }
            }
            return s;
        }

        public static bool Soru7(int n)
        {
            return (n / 4) == (n / 4.0);
        }

        public static string Soru8(int n1, int n2, int n3, int n4)
        {
            int[] kenarlar = {n1, n2, n3, n4};
            if(n1 == n2 && n1 == n3  && n1 == n4)
            {
                return "Karedir";
            }
            else
            {
                int c = 0;
                for(int i = 0; i < kenarlar.Length-1; i++)
                {
                    for(int j = i + 1; j < kenarlar.Length; j++)
                    {
                        if(kenarlar[j] == kenarlar[i])
                        {
                            c++;
                        }
                    }
                }
                if(c == 2)
                {
                    return "Dikdörtgendir";
                }
                return "Kare ya da dikdörtgen değildir";
            }
        }

        public static string Soru9(int[] sayilar)
        {
            List<int> list = new List<int>();
            for(int i = 0; i < sayilar.Length; i++)
            {
                string sayi = sayilar[i].ToString();
                foreach(char c in sayi)
                {
                    list.Add(int.Parse(c.ToString()));
                }
            }
            int[] arr = list.ToArray();
            for (int i = 0; i < arr.Length; i++)
            {
                for (int j = i + 1; j < arr.Length; j++)
                {
                    if (arr[i] > arr[j])
                    {
                        (arr[i], arr[j]) = (arr[j], arr[i]);
                    }
                }
            }

            string s = "";
            for(int i = arr.Length - 1; i >= 0; i--)
            {
                s += arr[i].ToString();
            }
            return s;
        }

        public static string Soru10(string s)
        {
            List<char> list = new List<char>();
            foreach(char c in s)
            {
                if (!list.Contains(c))
                {
                    list.Add(c);
                }
            }
            return String.Join("", list);
        }

        public static List<int> Soru11()
        {
            int[] arr = { 50, 43, 987, 123, 67, 84, 176, 341, 674, 121, 243, 305, 192, 1203 };
            List<int> list = new List<int>();
            for (int i = 0; i < arr.Length; i++)
            {
                for (int j = i + 1; j < arr.Length; j++)
                {
                    if (arr[i] > arr[j])
                    {
                        (arr[i], arr[j]) = (arr[j], arr[i]);
                    }
                }
            }
            for(int i = 0; i < 3; i++)
            {
                list.Add(arr[i]);
            }
            return list;
        }

        public  static List<int> Soru12(int n1, int n2, int n3)
        {
            List <int> list = new List<int>();
            Random random = new Random();
            for(int i = 0; i < 5; i++)
            {
                string s = n1.ToString() + n2.ToString() + n3.ToString();
                for (int j = 0; j < 3; j++)
                {
                    int number = random.Next(0, 9);
                    s += number.ToString();                    
                }
                int sayi = int.Parse(s);
                list.Add(sayi);
            }                        
            return list;
        }

        public static string Soru13(string s)
        {
            List<char> list = new List<char> { 'a', 'e', 'ı', 'i', 'u', 'ü', 'o', 'ö'};
            List<char> list2 = new List<char>();
            foreach(char c in s)
            {
                if (!list.Contains(c))
                {
                    list2.Add(c);
                }
            }
            return String.Join("", list2);    
        }

        public static void Soru14(List<int> l1, List<int> l2, List<int> l3)
        {
            List<List<int>> matris = new List<List<int>> { l1, l2, l3};
            List<List<int>> transpoze = new List<List<int>>();
            for (int i = 0; i < matris.Count; i++)
            {
                List<int> l = new List<int>();
                for (int j = 0; j < matris[i].Count; j++)
                {
                    l.Add(matris[j][i]);
                }
                transpoze.Add(l);
            }
            for (int i = 0; i < transpoze.Count; i++)
            {
                string line = String.Join(", ", transpoze[i]);
                Console.WriteLine(line);
            }
        }

        public static int[] Soru15(string s)
        {
            List<int> list = new List<int>();
            foreach(char c in s)
            {
                list.Add((byte)c);
            }
            int[] arr = list.ToArray();
            for (int i = 0; i < arr.Length; i++)
            {
                for (int j = i + 1; j < arr.Length; j++)
                {
                    if (arr[i] > arr[j])
                    {
                        (arr[i], arr[j]) = (arr[j], arr[i]);
                    }
                }
            }
            return arr;
        }
    }
}
