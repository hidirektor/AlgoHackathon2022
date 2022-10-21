
List<int> dizi = new List<int>()
{
    50, 43, 987, 123, 67, 84, 176, 341, 674, 121, 243, 305, 192, 1203
};
int enKucuk = dizi[0];

foreach (var item in dizi)
{
    if(enKucuk > item)
        enKucuk = item;
}

dizi.Remove(enKucuk);

int enKucuk2 = dizi[0];

foreach (var item in dizi)
{
    if (enKucuk2 > item)
        enKucuk2 = item;
}
dizi.Remove(enKucuk2);

int enKucuk3 = dizi[0];

foreach (var item in dizi)
{
    if (enKucuk3 > item)
        enKucuk3 = item;
}

int EnKucuk3Toplam = enKucuk + enKucuk2 + enKucuk3;

Console.WriteLine(enKucuk + " " + enKucuk2 + " " + enKucuk3);

Console.WriteLine(EnKucuk3Toplam);