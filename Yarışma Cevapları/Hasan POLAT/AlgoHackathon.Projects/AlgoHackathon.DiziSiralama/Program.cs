List<int> dizi1 = new List<int>()
{
    8, 10, 19, 6, 17, 14, 15, 2
};
List<int> dizi2 = new List<int>()
{
    17, 18, 11, 2, 10, 4, 15, 3
};
List<int> dizi3 = new List<int>()
{
    11, 2, 9, 19, 20, 10, 12, 14
};
List<int> tekrarsizDizi = new List<int>();


dizi1.AddRange(dizi2);

dizi1.AddRange(dizi3);

int sayac = 0;
foreach (var item in dizi1)
{
    if (!tekrarsizDizi.Contains(item))
        tekrarsizDizi.Add(item);
}
int[] siraliDizi = new int[tekrarsizDizi.Count];
for (int i = 0; i < 100; i++)
{
    if (tekrarsizDizi.Contains(i))
        siraliDizi[sayac++] = i;
}

Console.WriteLine("Dizilim: ");
foreach (var item in siraliDizi)
{
    Console.Write(item + " | ");
}

Console.ReadKey();
