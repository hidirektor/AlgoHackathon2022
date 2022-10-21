def usAlma(taban, us, deger):
	if us>1:
		deger = deger * taban
		us = us -1
		return usAlma(taban, us, deger)
	elif us==1:
		return deger

sayi1 = input("Ussunu almak istediginiz dogal sayiyi giriniz: ")
sayi2 = input("Sayinin kacinci kuvvetini almak istediginizi giriniz: ")

sayi1 = int(sayi1)
sayi2 = int(sayi2)

while(sayi1<0) or (sayi2<0):
	sayi1 = input("Ussunu almak istediginiz dogal sayiyi giriniz: ")
	sayi2 = input("Sayinin kacinci kuvvetini almak istediginizi giriniz: ")

sayi1 = int(sayi1)
sayi2 = int(sayi2)

print(str(sayi1) + " sayisinin " + str(sayi2) +". kuvveti: " + str(usAlma(sayi1, sayi2, sayi1)))
