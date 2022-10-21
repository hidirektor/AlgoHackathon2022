Console.WriteLine("Bir sayı giriniz: ");

try
{
    int sayi = int.Parse(Console.ReadLine());

    decimal sayiYedek = sayi;
    int basamak = 0;
    List<int> basamaktakiSayilar = new List<int>();
    while (true)
    {
        basamaktakiSayilar.Add((int)sayiYedek % 10);
        sayiYedek = sayiYedek / 10;
        basamak++;
        if (sayiYedek < 1)
            break;
    }

    if (basamak < 3)
        throw new Exception("Sayı Polindrom Değil");

    for (int i = 0; i < basamak; i++)
    {

        if((basamak - i) > 0)
        {
            if (basamaktakiSayilar[i] != basamaktakiSayilar[(basamak - i - 1)])
                throw new Exception("Sayı Polindrom Değil");
        }
        else
        {
            break;
        }
    }

    Console.WriteLine("Sayı Polindrom! : " + sayi);
}
catch (Exception ex)
{
    Console.WriteLine(ex.Message);
}

