import random

n1 = input("Rakam gir: ")
n2 = input("Rakam gir: ")
n3 = input("Rakam gir: ")
ilk3 = n1 + n2 + n3

# ilk kodum
# for i in range(5):
#     a = ilk3 + str(random.randint(100, 999))
#     print(a)

# başladıktan 2.5 saat sonra gelen string olmayacak bilgisinden sonraki kodum
rakam = [n1, n2, n3]

for i in range(5):
    rakam = [n1, n2, n3]
    for j in range(3):
        rakam.append(random.randint(0, 9))

    print(rakam)

