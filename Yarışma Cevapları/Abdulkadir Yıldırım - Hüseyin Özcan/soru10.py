while True:
    inputValue = input("30 karakterli bir giriş yapın: ")
    if len(inputValue) < 30:
        print("Lütfen daha fazla karekter girişi yapın.")
        print()
    else:
        break

inputValueList=[]
for inputV in inputValue:
    inputValueList.append(inputV)


valueList=[]
isIn=False
for values in inputValueList:
    for lastValues in valueList:
        if (lastValues==values):
            isIn=True

    if isIn==True:
        isIn=False
    else:
        valueList.append(values)

lastVStr=""
for k in valueList:
    lastVStr+=k

print(lastVStr)



