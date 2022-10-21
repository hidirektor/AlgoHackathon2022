sayi = input("Kontrol edilecek sayiyi gir.")
sayi = int(sayi)

while((sayi)<100 or (sayi)>999):
	sayi = input("3 basamakli bir sayi gir.")
	sayi = int(sayi)

birler = 0
onlar = 0
yuzler = 0

def palindromMu(sayi):
	for v in range(10,100):
		for i in range(0,10):
			if (sayi-i)/10 == v:
				birler = i
				yuzler = v

	for v in range(0,10):
		for i in range(0,10):
			if (yuzler-i)/10 == v:
				onlar = i
				yuzler = v

	if (birler == yuzler):
		return 1
	else:
		return -1

if palindromMu(sayi) == 1:
	print("Girdigin sayi bir palindrom sayi.")
else:
	print("Girdigin sayi palindrom sayi degil.")
