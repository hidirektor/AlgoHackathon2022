
Console.WriteLine("3 basamaklı sayı giriniz: ");

int gelenSayi = int.Parse(Console.ReadLine());

string sayi1 = gelenSayi.ToString() + new Random().Next(100, 999).ToString();
string sayi2 = gelenSayi.ToString() + new Random().Next(100, 999).ToString();
string sayi3 = gelenSayi.ToString() + new Random().Next(100, 999).ToString();

Console.WriteLine(sayi1);
Console.WriteLine(sayi2);
Console.WriteLine(sayi3);