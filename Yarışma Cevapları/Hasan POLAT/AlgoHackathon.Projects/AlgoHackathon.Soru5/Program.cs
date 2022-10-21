int[][] matris1 =
{
    new int[]{0, 0},
    new int[]{0, 0}
};
int[][] matris2 =
{
    new int[]{0, 0},
    new int[]{0, 0}
};

int[][] cozumMatris =
{
    new int[]{0, 0},
    new int[]{0, 0}
};

Console.Write("1.Matrisin 1.Satırının 1.Değeri: ");
matris1[0][0] = int.Parse(Console.ReadLine());
Console.Write("1.Matrisin 1.Satırının 2.Değeri: ");
matris1[0][1] = int.Parse(Console.ReadLine());
Console.Write("1.Matrisin 2.Satırının 1.Değeri: ");
matris1[1][0] = int.Parse(Console.ReadLine());
Console.Write("1.Matrisin 2.Satırının 1.Değeri: ");
matris1[1][1] = int.Parse(Console.ReadLine());

Console.Write("2.Matrisin 1.Satırının 1.Değeri: ");
matris2[0][0] = int.Parse(Console.ReadLine());
Console.Write("2.Matrisin 1.Satırının 2.Değeri: ");
matris2[0][1] = int.Parse(Console.ReadLine());
Console.Write("2.Matrisin 2.Satırının 1.Değeri: ");
matris2[1][0] = int.Parse(Console.ReadLine());
Console.Write("2.Matrisin 2.Satırının 1.Değeri: ");
matris2[1][1] = int.Parse(Console.ReadLine());

int a = matris1[0][0];
int b = matris1[0][1];
int c = matris1[1][0];
int d = matris1[1][1];

int e = matris2[0][0];
int f = matris2[0][1];
int g = matris2[1][0];
int h = matris2[1][1];

cozumMatris[0][0] = ((a + d) * (e + h))
    + (d * (g - e))
    - ((a + b) * h)
    + ((b - d) * (g + h));

cozumMatris[0][1] = (a * (f - h))
    + ((a + b) * h);

cozumMatris[1][0] = ((c + d) * e)
    + (d * (g - e));

cozumMatris[1][1] = (a * (f - h))
    + ((a + d) * (e + h))
    - ((c + d) * e)
    - ((a - c) * (e + f));

foreach (var item in cozumMatris)
{

    foreach (var sayi in item)
    {
        Console.Write(sayi + " ");
    }
    Console.WriteLine();
}
