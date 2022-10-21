dizi1 = [8, 10, 19, 6, 17, 14, 15, 2]
dizi2 = [17, 18, 11, 2, 10, 4, 15, 3]
dizi3 = [11, 2, 9, 19, 20, 10, 12, 14]

for i in dizi2:
    if i not in dizi1:
        dizi1.append(i)
    for j in dizi3:
        if j not in dizi1:
            dizi1.append(j)

j = len(dizi1) - 1
tutamac = None

while j >= 0:
    for i in range(j):
        if dizi1[i] > dizi1[i+1]:
            tutamac = dizi1[i]
            dizi1[i] = dizi1[i+1]
            dizi1[i+1] = tutamac
    j -= 1
    
print(dizi1)