def main():
    ilkKenarUzunlugu = input("Ilk kenar uzunlugunu giriniz: ")
    ikinciKenarUzunlugu = input ("Ikinci kenar uzunlugunu giriniz: ")
    ucuncuKenarUzunlugu = input ("Ucuncu kenar uzunlugunu giriniz: ")
    dorduncuKenarUzunlugu = input ("Dorduncu kenar uzunlugunu giriniz: ")
    if(ilkKenarUzunlugu == ikinciKenarUzunlugu == ucuncuKenarUzunlugu == dorduncuKenarUzunlugu):
        print("Karedir")
    elif(ilkKenarUzunlugu == ucuncuKenarUzunlugu and ikinciKenarUzunlugu == dorduncuKenarUzunlugu):
        print("Dikdortgendir")
    else:
        print("Kare veya dikdortgen degildir")
main()