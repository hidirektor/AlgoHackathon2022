#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("Sirasiyla degerleri girin:");
    scanf_s("%d%d%d%d", &a, &b, &c, &d);
    if (a == b && a==c && a==d && b==c && b==d && d==c)
    {
        printf("Girdiginiz degerler kareye aittir.");
    }
    else if (a == c && b == d || a == b && c == d || a == d && b == c)
    {
        printf("Girdiginiz degerler dikdortgene aittir.");
    }
    else
        printf("girdiginiz degerler kare veya dikdortgene ait degildir.");

    return 0;
}
