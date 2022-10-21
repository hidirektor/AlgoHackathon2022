import sys

metin = []
boyutları = []
working = True
print("Metin değerleri gir döngüden çıkmak için 0 yaz.")
while working:
    a = input("Metin gir: ")

    if a == '0':
        working = False
    else:
        metin.append(a)





for i in metin:
    boyutları.append(sys.getsizeof(i))

print(boyutları)

j = len(boyutları) - 1
tutamac = None

while j >= 0:
    for i in range(j):
        if boyutları[i] > boyutları[i + 1]:
            tutamac = boyutları[i]
            boyutları[i] = boyutları[i + 1]
            boyutları[i + 1] = tutamac
    j -= 1

print(boyutları)
