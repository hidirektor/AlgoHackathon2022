
Console.Write("İstediğinizi yazınız: ");

string yazi = Console.ReadLine();

yazi = Temizle(yazi);

Console.WriteLine(yazi);

string Temizle(string yazi)
{
    List<char> list = new List<char>();
    string temizYazi = "";


    for (int i = 0; i < yazi.Length; i++)
    {
        if (!list.Contains(yazi[i]))
            list.Add(yazi[i]);
    }

    foreach (var item in list)
    {
        temizYazi += item;
    }

    return temizYazi;
}