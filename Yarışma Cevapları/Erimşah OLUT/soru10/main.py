string = input("Maksimum 30 karakerli bir yazı giriniz: ")
karakterler = []
for i in string:
    if i not in karakterler:
        karakterler.append(i)
print(karakterler)
