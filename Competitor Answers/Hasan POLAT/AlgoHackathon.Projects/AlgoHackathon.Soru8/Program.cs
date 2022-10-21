
Console.WriteLine("İlk Kenar Uzunluğu: ");
int kenar1 = int.Parse(Console.ReadLine());

Console.WriteLine("İkinci Kenar Uzunluğu: ");
int kenar2 = int.Parse(Console.ReadLine());

Console.WriteLine("Üçüncü Kenar Uzunluğu: ");
int kenar3 = int.Parse(Console.ReadLine());

Console.WriteLine("Dördüncü Kenar Uzunluğu: ");
int kenar4 = int.Parse(Console.ReadLine());

if ((kenar1 == kenar2) && (kenar2 == kenar3) && (kenar3 == kenar4))
    Console.WriteLine("Karedir");
else if (((kenar1 == kenar2) && (kenar3 == kenar4)) || ((kenar2 == kenar3) && (kenar4 == kenar1)) || ((kenar1 == kenar3) && (kenar2 == kenar4)))
    Console.WriteLine("Dikdörtgendir");
else
    Console.WriteLine("Çözümlenemedi");
