int[][] matris =
{
    new int[] {3, 5, 7},
    new int[] {6, 8, 3},
    new int[] {1, 4, 9}
};

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