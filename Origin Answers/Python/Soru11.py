dizi = [50, 43, 987, 123, 67, 84, 176, 341, 674, 121, 243, 305, 192, 1203]

for i in range(len(dizi)):
    for j in range(i + 1, len(dizi)):
        if dizi[i] > dizi[j]:
            dizi[i], dizi[j] = dizi[j], dizi[i]
toplam = 0
toplam += dizi[0] + dizi[1] + dizi[2]
print(toplam)