def sortList(dizi):
    for i in range(len(dizi)):
        for j in range(i + 1, len(dizi)):
            if dizi[i] > dizi[j]:
                dizi[i], dizi[j] = dizi[j], dizi[i]

asciiList = []
def main():
    metinler = ["Hello World", "Halil Ibrahim Direktor", "Orhun Ege Yilmazoglu", "Heil YTK"]
    for ele in metinler:
        asciiList.extend(ord(num) for num in ele)
    sortList(asciiList)
    print(asciiList)
main()