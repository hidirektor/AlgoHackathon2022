s = input("sayı giriniz:")

def palindrom(s):
    t=s[::-1]
    if s==t:
        print("Palindrom sayı")
    else:
        print("Palindrom sayı değil")

palindrom(s)