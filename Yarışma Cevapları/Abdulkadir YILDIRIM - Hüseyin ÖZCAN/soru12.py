import random 

list = [1,2,3,4,5]
print("Gireceğiniz sayılar basamak olduğundan lütfen 0,9 arasında olsun")
sayi1 = int(input("1 basamağı  giriniz"))
while True :
    if sayi1 > 9 :
        sayi1 = int(input("sayıyı 0,9 arasında girmediniz yeniden giriniz "))
    else:
        break
        

sayi2 = int(input("2. sayıyı giriniz"))

while True :
    if sayi2 > 9 :
        sayi2 = int(input("sayıyı 0,9 arasında girmediniz yeniden giriniz "))
    else:
        break
sayi3 = int(input("3. sayıyı giriniz"))

while True :
    if sayi3 > 9 :
        sayi3 = int(input("sayıyı 0,9 arasında girmediniz yeniden giriniz "))
    else:
        break

for i in list :
     random1 = random.randint(0, 9)

     random2 = random.randint(0, 9)

     random3 = random.randint(0, 9)
     sayı = (sayi1*100000) + (sayi2*10000) + (sayi3*1000) + (random1*100) +(random2*10) + (random3*1)

     print(sayı)