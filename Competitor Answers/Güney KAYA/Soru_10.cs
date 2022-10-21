using System;

namespace Hackaton_2
{
    class Program
    {
        static void Main(string[] args)
        {
            string metin = "üç yüzük göğün altında yaşayan elflere";
            //boşluk da bir karakter
            //beklenen output üç yzkgöğnaltıdşefr
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
                for (int k = i + 1; k < text.Length; k++)
                {
                    if (text[i] == text[k])
                    {
                        text[k] = '\0';
                    }
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
