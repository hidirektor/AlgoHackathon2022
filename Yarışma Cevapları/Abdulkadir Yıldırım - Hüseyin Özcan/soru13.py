inputList = []
unwantedCharList = ["i","ı","a","e","u","ü","o","ö"]
cleanWord = ""
while True:
    a = str(input("9 karakterten fazla olacak şekilde bir metin giriniz: "))
    if a =="x":
        break
        print()
    for i in a:
        inputList. append(i)

    isIn=False
    cleanList=[]
    for inputValues in inputList:
        for unwantedChar in unwantedCharList:
            if(unwantedChar==inputValues):
                isIn=True
        if isIn ==False:
            cleanList.append(inputValues)
        else:
            isIn=False
    cleanWord=""
    for lastValues in cleanList:
        print(lastValues)
        cleanWord+=lastValues

    print(cleanWord)





