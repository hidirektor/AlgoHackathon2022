sesliler = ["a", "e", "ı", "i", "o", "ö", "ı", "i"]
kelime = input("Minimum 9 harfli bir metin giriniz: ")
sessiz = ""

for i in kelime:
    if i not in sesliler:
        sessiz += i
        
print(sessiz)

