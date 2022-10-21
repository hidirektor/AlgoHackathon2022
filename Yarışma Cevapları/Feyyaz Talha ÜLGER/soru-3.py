rakamlar = []
sayi = input("Sayıyı giriniz: ")
rakamlar = tuple(sayi)
def iki_basamakli_kontrol():
    global rakamlar
    global sayi
    if rakamlar[0] == rakamlar[1]:
        return "Palindrom sayı"
    else:
        return "Palindrom sayı değil"
def uc_basamakli_kontrol():
    global rakamlar
    global sayi
    if rakamlar[0] == rakamlar[2]:
        return "Palindrom sayı"
    else:
        return "Palindrom sayı değil"
if len(rakamlar)==3:
    print(uc_basamakli_kontrol())
else:
    print(iki_basamakli_kontrol())
