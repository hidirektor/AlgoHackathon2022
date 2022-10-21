
int[][] matris =
{
    new int[]{0, 0, 0},
    new int[]{0, 0, 0},
    new int[]{0, 0, 0}
};

Console.Write("İlk Satırın İlk Numarası: ");
matris[0][0] = int.Parse(Console.ReadLine());

Console.Write("İlk Satırın İkinci Numarası: ");
matris[0][1] = int.Parse(Console.ReadLine());

Console.Write("İlk Satırın Üçüncü Numarası: ");
matris[0][2] = int.Parse(Console.ReadLine());

Console.Write("İkinci Satırın İlk Numarası: ");
matris[1][0] = int.Parse(Console.ReadLine());

Console.Write("İkinci Satırın İkinci Numarası: ");
matris[1][1] = int.Parse(Console.ReadLine());

Console.Write("İkinci Satırın Üçüncü Numarası: ");
matris[1][2] = int.Parse(Console.ReadLine());

Console.Write("Üçüncü Satırın İlk Numarası: ");
matris[2][0] = int.Parse(Console.ReadLine());

Console.Write("Üçüncü Satırın İkinci Numarası: ");
matris[2][1] = int.Parse(Console.ReadLine());

Console.Write("Üçüncü Satırın Üçüncü Numarası: ");
matris[2][2] = int.Parse(Console.ReadLine());



int[][] newMatris =
{
    new int[] {0, 0, 0},
    new int[] {0, 0, 0},
    new int[] {0, 0, 0}
};
for (int i = 0; i < matris.Length; i++)
{
    newMatris[i][0] = matris[0][i];
    newMatris[i][1] = matris[1][i];
    newMatris[i][2] = matris[2][i];
}

foreach (var item in newMatris)
{

    foreach (var sayi in item)
    {
        Console.Write(sayi + " ");
    }
    Console.WriteLine();
}

