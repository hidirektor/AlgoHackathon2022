values=[129,218,110,227,120,199,400,371,237]



list2 = []

for i in range(8) :

    d = str(values[i])
    a = d[0]
    b = d[1]
    c = d[2]
    list2.append(a)
    list2.append(b)
    list2.append(c)


sV=10
lastArray=[]



while True:
    for a in list2:
        if sV == int(a):
            lastArray.append(sV)
            sV=10
            list2.pop(list2.index(a))
    sV-=1
    if len(list2)<1:
        break



value=""
for h in lastArray:
    value+=str(h)

value=int(value)
print(value)