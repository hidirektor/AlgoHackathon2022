#(2^(p-1)) * (2^(p) - 1)

def muhtesemSayi(sayi):
    return 2**(sayi-1) * (2**sayi - 1)

def mod(sayi,mod)->int:
    while(sayi >= mod):
        sayi -= mod
    return sayi

def asalSayidir(sayi : int) -> bool:
    if(sayi == 1):
        return False
    for i in range(2, sayi):
        if(mod(sayi,i) == 0):
            return False
    return True

def main():
    for i in range(1,500):
        sonuc = muhtesemSayi(i)
        if(sonuc >=500):
            break
        if(asalSayidir(i)):
            print(sonuc,end=" ")
main()




