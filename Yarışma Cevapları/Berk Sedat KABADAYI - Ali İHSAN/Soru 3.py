

print("""
Palindrom Sayı Bulma
""")

sayı = int(input("Lütfen Sayi Giriniz: "))

esayı = "{}".format(sayı)

if(sayı == int(esayı[::-1])):
    print("{} sayısı polindromdur.".format(sayı))
else:
    print("{} sayısı polindrom değil1dir.".format(sayı))