taban = int(input("Üslü ifadenin tabanını yazınız: "))
us = int(input("Üslü ifadenin üssünü yazınız: "))

sonuc = taban

def usalma(taban, us):
    if us==1:
        print(taban)
    else:
        return usalma(taban*sonuc, us-1)

usalma(taban, us)

