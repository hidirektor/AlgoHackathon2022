A=[[],[]]
B=[[],[]]
for h in range(8):
    inValue = input(str(h+1)+". sayıyı girin: ")
    if h < 2:
        A[0].append(int(inValue))
    elif h >1 and h<4:
        A[1].append(int(inValue))
    elif h >3 and h<6:
        B[0].append(int(inValue))
    elif h >5 and h<8:
        B[1].append(int(inValue))

print()
a = A[0][0]
b = A[0][1]
c = A[1][0]
d = A[1][1]
e = B[0][0]
f = B[0][1]
g = B[1][0]
h = B[1][1]

p1 = a*(f-h)
p2 = (a+b)*h
p3 = (c+d)*e
p4 = d*(g-e)
p5 = (a+d)*(e+h)
p6 = (b-d)*(g+h)
p7 = (a-c)*(e+f)

C=[[p5+p4-p2+p6,p1+p2],[p3+p4,p1+p5-p3-p7]]

for h in C:
    print(h)



