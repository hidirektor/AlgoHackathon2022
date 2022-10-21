
def usAlma(us,taban):
    if(us == 1):
        return taban
    else:
        return taban * usAlma(us-1,taban)

us = int(input("Üs:"))
taban = int(input("Taban:"))

sonuc = usAlma(us,taban)
print(sonuc)



