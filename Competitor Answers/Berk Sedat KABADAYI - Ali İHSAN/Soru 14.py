,


dizi = [[0,0,0],[0,0,0],[0,0,0]]

for i in range(0,3):
    for j in range(0,3):
        dizi[i][j] = int(input("[{}][{}].elemanı: ".format(i+1,j+1)))

print("Matrisiniz:")
for i in dizi:
    print(i)

for i in range(0, 3):
    for j in range(0, i):
        temp = dizi[i][j]
        dizi[i][j] = dizi[j][i]
        dizi[j][i] = temp

print("Transpozesi:")
for i in dizi:
    print(i)