girdi = input("Byte degerlerinin siralanmasini istediginiz sozcuk/sozcukleri giriniz: ")

byteDegerleri = []

for i in girdi:
	byteDegerleri.append(ord(i))

def diziUzunlugu(dizi):
	sayac1 = 0
	for v in dizi:
		sayac1 = sayac1 +1
	return sayac1

def diziyiSirala(dizi):
	baslangic = 0
	for i in range(0,diziUzunlugu(dizi)):
		for j in range(baslangic, diziUzunlugu(dizi)):
			if j!=diziUzunlugu(dizi)-1:
				if dizi[i]>dizi[j+1]:
					temp = dizi[j+1]
					dizi[j+1] = dizi[i]
					dizi[i] = temp
		baslangic = baslangic + 1

diziyiSirala(byteDegerleri)
print(byteDegerleri)