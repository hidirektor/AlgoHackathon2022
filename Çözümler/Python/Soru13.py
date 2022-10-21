def sesliHarfSil(metin):
    sesliHarfler = "aeıioöuüAEIİOÖUÜ"
    for sesliHarf in sesliHarfler:
        metin = metin.replace(sesliHarf, "")
    return metin

def main():
    metin = input("Metin giriniz: ")
    if(len(metin) < 9):
        print("Metin en az 9 karakter olmalıdır.")
    else:
        print(sesliHarfSil(metin))
main()
