
Console.WriteLine("İstediğinizi Yazınız: ");

string data = Console.ReadLine();

List<int> chars = new List<int>();

foreach (var item in data)
{
    if (item == ' ')
        continue;
    chars.Add(item);
}

int sayac = 0;
int[] siraliDizi = new int[chars.Count];
for (int i = 0; i < 300; i++)
{
    if (chars.Contains(i))
        siraliDizi[sayac++] = i;
}

Console.WriteLine("Dizilim: ");
foreach (var item in siraliDizi)
{
    if (item == 0)
        break;


    Console.Write(item + " | ");
}