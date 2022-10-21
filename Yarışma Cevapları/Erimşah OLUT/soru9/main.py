sayılar = [129, 218, 110, 227, 120, 199, 400, 371, 237]
tekerteker = []
for i in sayılar:
    for j in str(i):
        tekerteker.append(j)

j = len(tekerteker) - 1
tutamac = None

while j >= 0:
    for i in range(j):
        if tekerteker[i] < tekerteker[i + 1]:
            tutamac = tekerteker[i]
            tekerteker[i] = tekerteker[i + 1]
            tekerteker[i + 1] = tutamac
    j -= 1
new = "".join(tekerteker)
print(new)
