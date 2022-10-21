dizi1=[0,0,0]
dizi2=[0,0,0]
dizi3=[0,0,0]
matrisToplu=[[0,0,0],
             [0,0,0],
             [0,0,0]]

def matrisAlma(dizi):
    for i in range(3):
        dizi[i]=input("deger giriniz:")
    return dizi

def transpoze(matris):
    temp = [[0,0,0],
            [0,0,0],
            [0,0,0]]
    for i in range(3):
        for j in range(3):
            temp[j][i] = matris[i][j]

    for k in temp:
        for b in k:
            print(b, end=" ")
        print()


matrisToplu = [matrisAlma(dizi1)] + [matrisAlma(dizi2)] + [matrisAlma(dizi3)]
transpoze(matrisToplu)