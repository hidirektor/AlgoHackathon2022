def mod4(sayi : int) -> int:
    while(sayi >= 4):
        sayi-=4
    return sayi


def main():
    yil = int(input("Yıl giriniz: "))
    if(mod4(yil) == 0):
        print("Artık yıl")
    else:
        print("Artık yıl değil")

main()