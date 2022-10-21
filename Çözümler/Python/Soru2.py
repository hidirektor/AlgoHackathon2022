dizi1= [8, 10, 19, 6, 17, 14, 15, 2]
dizi2= [17, 18, 11, 2, 10, 4, 15, 3]
dizi3= [11, 2, 9, 19, 20, 10, 12, 14]
dizi4 =[]

def bubbleSort(dizi, dizi0):
    dizi4=dizi+dizi0
    n=len(dizi4)
    for i in range(n):
        for j in range(0,n-i-1):
            if dizi4[j]>dizi4[j+1]:
                dizi4[j],dizi4[j+1]=dizi4[j+1],dizi4[j]

    if(len(dizi4)!=len(dizi1+dizi2+dizi3)):
        bubbleSort(dizi4,dizi2)
    else:
        küme4=set(dizi4)
        dizi4=list(küme4)
        print(dizi4)

bubbleSort(dizi1,dizi3)

