import random
rakamlar = []
for sayi in range(1,10):
    sayi = random.randint(0,9)
    str(rakamlar.append(sayi))
yuzler_b= []
onlar_b= []
birler_b= []
print(rakamlar)
sayi=[]
def yuzler():
    if 9 in rakamlar:
        yuzler_b.append(9)
        rakamlar.remove(9)
    elif 8 in rakamlar:
        yuzler_b.append(8)
        rakamlar.remove(8)
    elif 7 in rakamlar:
        yuzler_b.append(7)
        rakamlar.remove(7)
    elif 6 in rakamlar:
        yuzler_b.append(6)
        rakamlar.remove(6)
    elif 5 in rakamlar:
        yuzler_b.append(5)
        rakamlar.remove(5)
    elif 4 in rakamlar:
        yuzler_b.append(4)
        rakamlar.remove(4)
    elif 3 in rakamlar:
        yuzler_b.append(3)
        rakamlar.remove(3)
    elif 2 in rakamlar:
        yuzler_b.append(2)
        rakamlar.remove(2)
    elif 1 in rakamlar:
        yuzler_b.append(1)
        rakamlar.remove(1)
def onlar():
    if 9 in rakamlar:
        onlar_b.append(9)
        rakamlar.remove(9)
    elif 8 in rakamlar:
        onlar_b.append(8)
        rakamlar.remove(8)
    elif 7 in rakamlar:
        onlar_b.append(7)
        rakamlar.remove(7)
    elif 6 in rakamlar:
        onlar_b.append(6)
        rakamlar.remove(6)
    elif 5 in rakamlar:
        onlar_b.append(5)
        rakamlar.remove(5)
    elif 4 in rakamlar:
        onlar_b.append(4)
        rakamlar.remove(4)
    elif 3 in rakamlar:
        onlar_b.append(3)
        rakamlar.remove(3)
    elif 2 in rakamlar:
        onlar_b.append(2)
        rakamlar.remove(2)
    elif 1 in rakamlar:
        onlar_b.append(1)
        rakamlar.remove(1)
def birler():
    if 9 in rakamlar:
        birler_b.append(9)
        rakamlar.remove(9)
    elif 8 in rakamlar:
        birler_b.append(8)
        rakamlar.remove(8)
    elif 7 in rakamlar:
        birler_b.append(7)
        rakamlar.remove(7)
    elif 6 in rakamlar:
        birler_b.append(6)
        rakamlar.remove(6)
    elif 5 in rakamlar:
        birler_b.append(5)
        rakamlar.remove(5)
    elif 4 in rakamlar:
        birler_b.append(4)
        rakamlar.remove(4)
    elif 3 in rakamlar:
        birler_b.append(3)
        rakamlar.remove(3)
    elif 2 in rakamlar:
        birler_b.append(2)
        rakamlar.remove(2)
    elif 1 in rakamlar:
        birler_b.append(1)
        rakamlar.remove(1)
yuzler()
onlar()
birler()

str(birler_b)
str(onlar_b)
str(yuzler_b)

sayi = yuzler_b + onlar_b
sayi = sayi + birler_b

print(f"{sayi[0]}{sayi[1]}{sayi[2]}")
