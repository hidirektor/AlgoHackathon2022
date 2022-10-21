def strassen(dizi1: list[int],dizi2 : list[int]) -> list[list[int]]:
    p1 = dizi1[0][0] * (dizi2[0][1] - dizi2[1][1])
    p2 = (dizi1[0][0] + dizi1[0][1]) * dizi2[1][1]
    p3 = (dizi1[1][0] + dizi1[1][1]) * dizi2[0][0]
    p4 = dizi1[1][1] * (dizi2[1][0] - dizi2[0][0])
    p5 = (dizi1[0][0] + dizi1[1][1]) * (dizi2[0][0] + dizi2[1][1])
    p6 = (dizi1[0][1] - dizi1[1][1]) * (dizi2[1][0] + dizi2[1][1])
    p7 = (dizi1[0][0] - dizi1[1][0]) * (dizi2[0][0] + dizi2[0][1])
    sonucDizisi = [[0,0],[0,0]]
    sonucDizisi[0][0] = p5 + p4 - p2 + p6
    sonucDizisi[0][1] = p1 + p2
    sonucDizisi[1][0] = p3 + p4
    sonucDizisi[1][1] = p1 + p5 - p3 - p7
    return sonucDizisi



def main():
    inputArray = input("1. dizi icin 2x2 lik bir matris icin 4 sayi giriniz: ")

    dizi1 = inputArray.split()
    dizi1 = [int(i) for i in dizi1]
    dizi1 = [[dizi1[0],dizi1[1]],[dizi1[2],dizi1[3]]]
    inputArray = input("2. dizi icin 2x2 lik bir matris icin 4 sayi giriniz: ")

    dizi2 = inputArray.split()
    dizi2 = [int(i) for i in dizi2]
    dizi2 = [[dizi2[0],dizi2[1]],[dizi2[2],dizi2[3]]]
    sonucDizisi = strassen(dizi1,dizi2)

    for i in range(2):
        for j in range(2):
            print(sonucDizisi[i][j], end=" ")
        print()

main()

