
Console.Write("Yıl giriniz: ");

int sayi = int.Parse(Console.ReadLine());

if (((int)sayi / 4) * 4 == sayi)
    Console.WriteLine("Artık yıl");
else
    Console.WriteLine("no");
