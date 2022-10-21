dizi1 = [8, 10, 19, 6, 17, 14, 15, 2]
dizi2 = [17, 18, 11, 2, 10, 4, 15, 3]
dizi3 = [11, 2, 9, 19, 20, 10 , 12, 14]

print("Dizi 1:" + str(dizi1))
print("Dizi 2:" + str(dizi2))
print("Dizi 3:" + str(dizi3))

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

def dizileriBirlestir(ilkDizi, ikinciDizi):
	for i in range(0,diziUzunlugu(ilkDizi)):
		tekrar = False
		for val in ikinciDizi:
			if ilkDizi[i] == val:
				tekrar = True
		if tekrar == True:
			continue
		elif tekrar == False:
			ikinciDizi.append(ilkDizi[i])

dizileriBirlestir(dizi1,dizi3)
diziyiSirala(dizi3)
dizileriBirlestir(dizi2,dizi3)
diziyiSirala(dizi3)

print("Dizilerin birlestirilmis ve siralanmis hali: "+ str(dizi3))