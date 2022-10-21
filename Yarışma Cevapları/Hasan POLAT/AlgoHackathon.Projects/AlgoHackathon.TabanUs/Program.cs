
Console.Write("Lütfen bir taban değeri giriniz: ");

string taban = Console.ReadLine();

Console.Write("Lütfen bir üs değeri giriniz: ");

string us = Console.ReadLine();

var sonuc = recursionFunc(int.Parse(taban), int.Parse(us));

Console.WriteLine(sonuc);


int recursionFunc(int taban, int us)
{
    if (us <= 1)
        return taban;

    if (taban == 0)
        return 0;
    else if (taban == 1)
        return 1;
    else
        return taban * recursionFunc(taban, (us - 1));

}