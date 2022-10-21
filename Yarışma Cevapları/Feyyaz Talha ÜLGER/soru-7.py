def artik():
    yil = int(input("Hesaplamak istediğiniz yılı giriniz: "))
    if yil%4 == 0:
        print("Artık yıl")
    else:
        print("Artık yıl değil")
artik()