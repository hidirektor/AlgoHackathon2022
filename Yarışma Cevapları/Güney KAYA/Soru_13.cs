using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            string metin = "üç yüzük göğün altında yaşayan elflere";
            //beklenen output ç yzk gğn ltnd yşyn lflr
            aynıKarakterSil(metin);
        }
        static void aynıKarakterSil(string metin)
        {
            char[] text = new char[metin.Length];
            for (int j = 0; j < metin.Length; j++)
            {
                text[j] = metin[j];
            }
            for (int i = 0; i < text.Length; i++)
            {
                if (text[i] == 'a' ||
                    text[i] == 'e' ||
                    text[i] == 'ı' ||
                    text[i] == 'i' ||
                    text[i] == 'o' ||
                    text[i] == 'ö' ||
                    text[i] == 'u' ||
                    text[i] == 'ü')
                {
                    text[i] = '\0';
                }
            }

            for (int j = 0; j < text.Length; j++)
            {
                if (text[j] != '\0')
                {
                    Console.WriteLine(text[j]);
                }
            }
        }
    }
}
