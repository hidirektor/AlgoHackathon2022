def main():
    metin = input("Metin giriniz: ")
    tekrarsizMetin = ""
    if(len(metin) > 30):
        print("Metin 30 karakterden uzun olamaz.")
    else:
        tekrarsizMetin = metin[0]
        for i in range(1, len(metin)):
            if(metin[i] not in tekrarsizMetin):
                tekrarsizMetin += metin[i]
    print(tekrarsizMetin)
main()
