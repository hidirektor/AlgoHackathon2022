sayi = input("Sayi giriniz: ")
i = len(sayi)-1
j = 0
polidrom = True

while i >= j:
    print(i, j)
    if sayi[i] != sayi[j]:
        polidrom = False
    j += 1
    i -= 1

print(f"İs {sayi} palindrome number: {polidrom}")