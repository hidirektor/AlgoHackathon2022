using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace soru15
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Bir metin girin: ");
            string input = Convert.ToString(Console.ReadLine());
            List<string> inputArray = new List<string>();
            for (int i = 0; i < input.Length; i++)
            {
                inputArray.Add(input.Substring(i,1));
            }
            List<char> inputArrayC = new List<char>();
            foreach (string h in inputArray)
            {
                inputArrayC.Add(Convert.ToChar(h));
            }
            List<byte> inputArrayB = new List<byte>();
            foreach (char k in inputArrayC)
            {
                inputArrayB.Add(Convert.ToByte(k));
            }

            int hn = 0;
            List<int> inputArrayI = new List<int>();
            while (true)
            {
                foreach (int m in inputArrayB)
                {
                    if (hn == m)
                    {
                        inputArrayI.Add(m);
                        break;
                    }


                }
                hn += 1;
                if (inputArrayI.Count() == inputArrayC.Count())
                {
                    break;
                }

            }
            foreach (int value in inputArrayI)
            {
                Console.WriteLine(value);

            }
            while (true)
            {

            }

            //byte k = Convert.ToByte(h);

        }
    }
}
