dizi = [50, 43, 987, 123,67, 84, 176, 341, 674, 121, 243, 305, 192, 1203]

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

diziyiSirala(dizi)
toplam = dizi[0] + dizi[1] + dizi[2]
print("En kucuk 3 sayinin toplami: "+ str(toplam))