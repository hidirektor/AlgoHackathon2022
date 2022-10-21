
Console.WriteLine("Minimum 9 karakterli bir metin giriniz: ");

string veri = Console.ReadLine();

List<char> sesliHarfler = new List<char>()
{
    'a', 'e', 'ı', 'i', 'o', 'ö', 'u', 'ü'
};

string newString = "";

foreach (var item in veri)
{
    if(!sesliHarfler.Contains(item))
        newString += item;
}

Console.WriteLine(newString);