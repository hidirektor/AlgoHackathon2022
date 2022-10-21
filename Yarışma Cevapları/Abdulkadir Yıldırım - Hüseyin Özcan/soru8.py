
lines=[]
for h in range(4):
    inputV=input(str(h+1)+". kenar uzunluğu: ")
    lines.append(inputV)

if lines[0]==lines[1] and lines[1]==lines[2] and lines[2]==lines[3]:
    print("Bu bir karedir.(bu arada kare de bir dikdörtgendir:)")

elif lines[0]==lines[1] and lines[2]==lines[3] and lines[1]!=lines[2]:
    print("Bu bir dikdörtgendir.")
elif lines[0]==lines[2] and lines[1]==lines[3] and lines[0]!=lines[1]:
    print("Bu bir dikdörtgendir.")
else:
    print("Bu kare veya dikdörtgen değildir.")

