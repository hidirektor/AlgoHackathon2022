matris11 = int(input("matrisin 1. dizi 1. elemanı giriniz"))
matris12 = int(input("matrisin 1.dizi 2. elemanı giriniz"))
matris13 = int(input("matrisin 1.dizi 3. elemanı giriniz"))
matris21 = int(input("matrisin 2. dizi 1. elemanı giriniz"))
matris22 = int(input("matrisin 2. dizi 2. elemanı giriniz"))
matris23 = int(input("matrisin 2. dizi 3. elemanı giriniz"))
matris31 = int(input("matrisin 3. dizi 1. elemanı giriniz"))
matris32 = int(input("matrisin 3. dizi 2. elemanı giriniz"))
matris33 = int(input("matrisin 3. dizi 3. elemanı giriniz"))

matris= [[matris11,matris12,matris13],[matris21,matris22,matris23],[matris31,matris32,matris33]]

MatrisN = [[matris[0][0],matris[1][0],matris[2][0]],[matris[0][1],matris[1][1],matris[2][1]],[matris[0][2],matris[1][2],matris[2][2]]]

for i in MatrisN :
    print(i)