matris = [[3, 5, 7],
		  [6, 8, 3],
		  [1, 4, 9]]

transpoze = [[0,0,0],[0,0,0],[0,0,0]]

def transpozeHesapla(verilenMatris):
	for i in range(0,3):
		for j in range(0,3):
			transpoze[i][j] = verilenMatris[j][i]

transpozeHesapla(matris)

def ekranaVer(matris):
	print("Verilen matrisin transpozesi:")
	for i in range(0,3):
		print(matris[i])

ekranaVer(transpoze)