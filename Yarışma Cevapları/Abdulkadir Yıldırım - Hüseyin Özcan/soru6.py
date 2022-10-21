def asalMI(value):
    v=0
    for h in range(value):
        k=value/(h+1)
        k=int(k)
        if int(k*(h+1)) == int(value):
            v+=1

    if v==2:
        return True
    else:
        return False



for p in range(999):
    if asalMI(p) == True and asalMI((2**(p))-1) == True:
        muhtesemSayi=(2**(p-1))*((2**p)-1)
        if(muhtesemSayi > 500):
            break
        print(str(muhtesemSayi)+" bir mükemmel sayıdır.")

