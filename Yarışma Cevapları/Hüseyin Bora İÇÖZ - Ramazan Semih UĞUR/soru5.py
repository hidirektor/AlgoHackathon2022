matris1 = [[0,0],
		  [0,0]]
matris2 = [[0,0],
          [0,0]]
sonucMatrisi = [[0,0],
               [0,0]]

a,b,c,d,e,f,g,h = 0,0,0,0,0,0,0,0
p1, p2, p3, p4, p5, p6, p7= 0,0,0,0,0,0,0

def kullanicidanDegerAl():
    ch = 0
    while (ch<=1):
        i = 0
        while i<=1:
            j = 0
            while j<=1:
                alinanSayi = input(str(ch+1) +". matrisin " + str(i+1) +"x"+ str(j+1) + ". elemanini girin: ")
                matriseYerlestir(i,j,alinanSayi,ch)
                j = j + 1
            i = i + 1
        ch = ch + 1
    matriseYerlestir(-1,-1,-1,2)

def matriseYerlestir(x,y,sayi,ch):
    if ch == 0:
        matris1[x][y] = sayi
    elif ch == 1:
        matris2[x][y] = sayi
    elif ch == 2:
        matrislerleIslem(matris1, matris2)

def ekranaVer(m1, m2, son):
	print(son) 

def matrislerleIslem(matris1, matris2):
    a = int(matris1[0][0])
    b = int(matris1[0][1])
    c = int(matris1[1][0])
    d = int(matris1[1][1])
    e = int(matris2[0][0])
    f = int(matris2[0][1])
    g = int(matris2[1][0])
    h = int(matris2[1][1])

    p1 = a*(f-h)
    p2 = (a+b)*h
    p3 = (c+d)*e
    p4 = d*(g-e)
    p5 = (a+d)*(e+h)
    p6 = (b-d)*(g+h)
    p7 = (a-c)*(e*f)

    sonucMatrisi[0][0] = p5+p4-p2+p6
    sonucMatrisi[0][1] = p1+p2
    sonucMatrisi[1][0] = p3+p4
    sonucMatrisi[1][1] = p1+p5-p3-p7

    ekranaVer(matris1, matris2, sonucMatrisi)

kullanicidanDegerAl()
