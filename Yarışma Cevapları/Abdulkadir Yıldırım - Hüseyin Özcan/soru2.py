
array1 = [8,10,19,6,17,14,15,2]
array2 = [17,18,11,2,10,4,15,3]
array3 = [11,2,9,19,20,10,12,14]

isIn=False

for value2 in array2:
    for value1 in array1:
        if value2==value1:
            isIn=True

    if isIn==False:
        array1.append(value2)
    else:
        isIn=False

isIn = False

for value3 in array3:
    for value1_2 in array1:
        if value3 == value1_2:
            isIn=True
    if isIn == False:
        array1.append(value3)
    else:
        isIn=False

sV=0
lastArray=[]

while True:
    for a in array1:
        if sV == a:
            lastArray.append(sV)
            sV=0
            array1.pop(array1.index(a))
    sV+=1
    if len(array1)<1:
        break






print(lastArray)



