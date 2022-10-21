dizi = [50, 49, 987, 123, 67, 84, 176, 341, 674, 121, 243, 305, 192, 1203]

j = len(dizi) - 1
tutamac = None

while j >= 0:
    for i in range(j):
        if dizi[i] > dizi[i + 1]:
            tutamac = dizi[i]
            dizi[i] = dizi[i + 1]
            dizi[i + 1] = tutamac
    j -= 1

print(f"Toplamları minimum olan 3 sayı = {dizi[0]} {dizi[1]} {dizi[2]} toplamları {dizi[0]+dizi[1]+dizi[2]} ")
