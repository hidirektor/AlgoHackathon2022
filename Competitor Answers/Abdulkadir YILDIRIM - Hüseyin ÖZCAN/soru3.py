
while True:
    inputValue = input("Sayı girin: ")
    if inputValue=="x":
        break


    if (len(inputValue) > 2 and len(inputValue) < 4):
        if inputValue[0] == inputValue[2]:
            print("Bu bir palindrom sayıdır.")

        else :
            print("palindrom sayı değildir")
    elif (len(inputValue) < 3 and len(inputValue) > 1):
        if inputValue[0] == inputValue[1]:
            print("Bu bir palindrom sayıdır.")

        else : 
            print("palindrom sayı değildir")
    elif  (len(inputValue) >= 4):
        print("Lütfen daha küçük bir sayı girin")
        
    else:
        print("Palidrom sayı değil")

