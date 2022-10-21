k1 = int(input("İlk kenarın uzunluğunu giriniz: "))
k2 = int(input("İkinci kenarın uzunluğunu giriniz: "))
k3 = int(input("Üçüncü kenarın uzunluğunu giriniz: "))
k4 = int(input("Dördüncü kenarın uzunluğunu giriniz: "))
h = k1


if k1 == k2 and k1 == k3 and k1 == k4 and k2 == k3 and k2 == k4 and k3 == k4:
    print("Karedir")
else:
    print("Dikdörtgendir")