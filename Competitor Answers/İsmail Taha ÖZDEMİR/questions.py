from gettext import find


def q1():
    def tabanUs(taban=int(input("Taban giriniz: ")),us=int(input("Us giriniz: "))):
        if taban == 0:
            return 0
        elif taban == 1:
            return 1
        elif us == 0:
            return 1
        else:
            return taban**us
    def main():
        print("Girilen degerlere gore sonuc: ",tabanUs())
    main()

def q2():
    dizi1 = {8,20,29,6,17,14,15,2}
    dizi2 = {17,18,11,2,10,10,4,15,3}
    dizi3 = {11,2,9,19,20,10,12,14}
    birlesim1 = dizi1 | dizi2
    sonuc = birlesim1 | dizi3
    print(sonuc)

def q3():
    sayi = input("3 basamakli bir sayi giriniz:")
    if sayi[0]==sayi[len(sayi)-1]:
        print("Palindrom sayidir.")
    else:
        print("Palindrom sayi degildir.")

def q4():
    mDeger = [" 3 "," 5 "," 7 "," 6 "," 8 "," 3 "," 1 "," 4 "," 9 "]
    matris = mDeger[0]+mDeger[1]+mDeger[2]+"\n"+mDeger[3]+mDeger[4]+mDeger[5]+"\n"+mDeger[6]+mDeger[7]+mDeger[8]
    print("Matris:\n"+matris)

    transMatris = mDeger[0]+mDeger[3]+mDeger[6]+"\n"+mDeger[1]+mDeger[4]+mDeger[7]+"\n"+mDeger[2]+mDeger[5]+mDeger[8]
    print("\nTranspoze hali:\n" + transMatris)



def q5():
    matris1 = [input("1. Matris a degeri:"),input("1. Matris b degeri:"),input("1. Matris c degeri:"),input("1. Matris d degeri:")]
    print("\n1. Matris:\n"+matris1[0]+" "+matris1[1]+"\n"+matris1[2]+" "+matris1[3])
    matris2 = [input("\n2. Matris a degeri:"),input("2. Matris b degeri:"),input("2. Matris c degeri:"),input("2. Matris d degeri:")]
    print("\n2. Matris:\n"+matris2[0]+" "+matris2[1]+"\n"+matris2[2]+" "+matris2[3])
    a=int(matris1[0])
    b=int(matris1[1])
    c=int(matris1[2])
    d=int(matris1[3])
    e=int(matris2[0])
    f=int(matris2[1])
    g=int(matris2[2])
    h=int(matris2[3])

    p1=a*(f-h)
    p2=(a+b)*h
    p3=(c+d)*e
    p4=d*(g-e)
    p5=(a+d)*(e+h)
    p6=(b-d)*(g+h)
    p7=(a-c)*(e+f)

    c1=p5+p4-p2+p6
    c2=p1+p2
    c3=p3+p4
    c4=p1+p5-p3-p7
    sonuc=[c1,c2,c3,c4]
    print("\nSonuc:\n"+str(c1)+" "+str(c2)+"\n"+str(c2)+" "+str(c3))

def q6():
    p = [2,3,5,7]
    mukemmelSayilar = []
    for a in p:
        muqSayi= (2^(a-1))*(2^(a)-1)
        if muqSayi<500:
            mukemmelSayilar.append(muqSayi)
        else:
            continue
    print(mukemmelSayilar)
#q6()
def q7():
    yil = int(input("Yil giriniz: "))
    i=0
    dizi =[]
    while i<100000:
        i=i+4
        dizi.append(i)
    if yil in dizi:
        print("Girdiginiz yil artik yildir.")
    else:
        print("Degildir.")

def q8():
    kenar1= input("1.kenar: ")
    kenar2= input("2.kenar: ")
    kenar3= input("3.kenar: ")
    kenar4= input("4.kenar: ")
    if kenar1==kenar2==kenar3==kenar4:
        print("Program ciktisi karedir.")
    elif kenar1==kenar2 and kenar3==kenar4:
        print("Program ciktisi dikdortgendir.")
    elif kenar1==kenar3 and kenar2==kenar4:
        print("Program ciktisi dikdortgendir.")
    elif kenar1==kenar4 and kenar2==kenar3:
        print("Program ciktisi dikdortgendir.")
    else:
        print("Lutfen diktortgen veya kareye ait olabilecek degerler giriniz!!")

def q9():
    sayilar = [129,218,110,227,120,199,400,371,237]
    sayilar.sort()
    sayilar.reverse()
    
    print("En buyuk sayi: "+str(sayilar[0])+str(sayilar[1])+str(sayilar[2])+str(sayilar[3])
    +str(sayilar[4])+str(sayilar[5])+str(sayilar[6])+str(sayilar[7])+str(sayilar[8]))

def q10():
    metin = input("Metin giriniz: ")
    if len(metin)<=30:
        dizi = []
        for a in range(0,len(metin)):
            dizi.append(metin[a])
            print(dizi)
        for b in dizi:
            if b in dizi:
                print(b)
                dizi.remove(b)
            else:
                continue
        print(dizi[0:len(dizi)])
    else:
        print("Max 30 karakterli bir metin giriniz.")

def q11():
    dizi = [50,43,987,123,67,84,176,341,674,121,243,305,192,1203]
    dizi.sort()
    minSayi1 = dizi[0]+dizi[1]
    minSayi2 = dizi[0]+dizi[2]
    minSayi3 = dizi[0]+dizi[3]
    print("Istenen sayilar: \n"+ str(minSayi1)+"\n"+str(minSayi2)+"\n"+str(minSayi3))

def q12():
    from random import randint
    deger=input("Ilk uc sayiyi giriniz:")
    for a in range(0,5):
        answer=True
        while answer==True:
            sayi=str(randint(100000,999999))
            if deger[0:3]==str(sayi[0:3]):
                print(sayi)
                answer = False
            else:
                continue

def q14():
    dizi1= []
    dizi2= []
    dizi3= []
    for a in range(1,4):
        for b in range(1,4):
            if a ==1:
                dizi1.append(input("1.Dizi: "))
            if a==2:
                dizi2.append(input("2.Dizi: "))
            if a==3:
                dizi3.append(input("3.Dizi: "))
    print("\nMatris gorunumu:\n"+dizi1[0]+" "+dizi1[1]+" "+dizi1[2])
    print(dizi2[0]+" "+dizi2[1]+" "+dizi2[2])
    print(dizi3[0]+" "+dizi3[1]+" "+dizi3[2])

    print("\nMatrisin Transpoze hali:\n"+dizi1[0]+" "+dizi2[0]+" "+dizi3[0])
    print(dizi1[1]+" "+dizi2[1]+" "+dizi3[1])
    print(dizi1[2]+" "+dizi2[2]+" "+dizi3[2])

def q15():
    metin = input("Metin giriniz: ")
    for i in metin:
        print(ord(i))


q15()