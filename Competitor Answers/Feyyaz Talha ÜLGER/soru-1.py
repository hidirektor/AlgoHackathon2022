def us(sayi,kuvvet):
    sonuc=1
    for _ in range(kuvvet):
        sonuc=sonuc*sayi
    return sonuc
s=int(input("Sayiyi giriniz: "))
k=int(input("Kuvveti giriniz: "))
print(us(s,k))