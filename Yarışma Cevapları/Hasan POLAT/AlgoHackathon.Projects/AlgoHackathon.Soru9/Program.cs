List<int> sayilar = new List<int>()
{
    129, 218, 110, 227, 120, 199, 400, 371, 237
};

string sayi = "";

List<int> tumRakamlar = new List<int>();

foreach (int i in sayilar)
{
    tumRakamlar.AddRange(basamaklarinaAyir(i));
}

for (int i = 9; i > 0; i--)
{
    foreach (int item in tumRakamlar.FindAll(x => x == i))
    {
        sayi += item;
    }
}

Console.WriteLine(sayi);

Console.ReadLine();

List<int> basamaklarinaAyir(int sayi)
{
    decimal sayiYedek = sayi;
    List<int> basamaktakiSayilar = new List<int>();
    while (true)
    {
        basamaktakiSayilar.Add((int)sayiYedek % 10);
        sayiYedek = sayiYedek / 10;
        if (sayiYedek < 1)
            break;
    }

    return basamaktakiSayilar;
}

