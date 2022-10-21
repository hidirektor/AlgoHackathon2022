girdi = "Bu bir denemedir."#input("Tekrarli harflerin silinecegi sozcukleri yaziniz: ")

def diziUzunlugu(dizi):
	sayac1 = 0
	for v in dizi:
		sayac1 = sayac1 +1
	return sayac1

def uzunlukHesapla(metin):
	uzunluk = 0
	for v in metin:
		uzunluk = uzunluk + 1
	return uzunluk

while uzunlukHesapla(girdi)>30:
	girdi = "Bu bir denemedir."#input("Tekrarli harflerin silinecegi sozcukleri yaziniz. En fazla 30 karakter: ")

byteDegerleri = []
tekrarSayilari = []

for i in girdi:
	byteDegerleri.append(ord(i))

print(byteDegerleri)

yeniListe = []

for val in byteDegerleri:
	for v in yeniListe:
		if v == val:
			break
		
