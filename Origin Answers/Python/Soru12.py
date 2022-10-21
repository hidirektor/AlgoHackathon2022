import random

sayilar = []
converted = []

def main(): 
    ilkUcSayi = input("İlk 3 basamaklı sayıyı giriniz: ")

    for i in range(5):
        sayilar.append(str(random.randint(100, 999)))

    for h in range(5):
        sayilar[h] = ilkUcSayi + sayilar[h]
    converted = list(map(int, sayilar))
    print(converted)
main()
