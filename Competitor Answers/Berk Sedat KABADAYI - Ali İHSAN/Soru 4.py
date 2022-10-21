


dizi = [[3,5,7],[6,8,3],[1,4,9]]


print("İlk Matris:")
for i in dizi:
    print(i)
temp = 0

print("----------")
for i in range(0,3):
    for j in range(0,i):
        temp = dizi[i][j]
        dizi[i][j] = dizi[j][i]
        dizi[j][i] = temp



print("Transpozesi")
for i in dizi:
    print(i)











