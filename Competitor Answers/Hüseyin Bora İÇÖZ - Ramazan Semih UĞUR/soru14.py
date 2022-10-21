dizi1 = [0,0,0]
dizi2 = [0,0,0]
dizi3 = [0,0,0]

matris = [[0,0,0],
		[0,0,0],
		[0,0,0]]

transpoze = [[0,0,0],
		[0,0,0],
		[0,0,0]]

for i in range(1,4):
	temp = [0,0,0]
	for j in range(0,3):
		temp[j] = input(str(i)+". dizinin "+ str(j+1) +". elemanini gir.")
	if i == 1:
		dizi1 = temp
	elif i == 2:
		dizi2 = temp
	elif i == 3:
		dizi3 = temp

birlesikDiziler = dizi1 + dizi2 + dizi3

def matrisHalineGetir(dizi):
	sayac=0
	for i in range(0,3):
		for j in range(0,3):
			matris[i][j]=dizi[sayac]
			sayac = sayac + 1

	for i in range(0,3):
		for j in range(0,3):
			transpoze[i][j] = matris[j][i]

	print("Dizilerin matrise donusmus hali: " +str(matris))
	print("Matrisin transpozesi: " +str(transpoze))

matrisHalineGetir(birlesikDiziler)
