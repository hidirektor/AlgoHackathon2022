
try
{
    double hesapSayi;
    double hesapSayi2;
    for (int i = 2; i < 500; i++)
    {
        hesapSayi2 = (Math.Pow(2, i) - 1);
        hesapSayi = Math.Pow(2, i - 1) * hesapSayi2;

        if(IsAsal((int)hesapSayi2) && IsAsal(i))
            Console.WriteLine(hesapSayi);

        if (hesapSayi > 500)
            break;
    }
}
catch (Exception ex)
{

    Console.WriteLine(ex.Message);
}

bool IsAsal(int sayi)
{

    for (int j = 2; j < 500; j++)
    {
        if (sayi == j)
            continue;
        if (sayi % j == 0)
            return false;
    }

    return true;
}