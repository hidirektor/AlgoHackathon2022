Matris= [[3,5,7],[6,8,3],[1,4,9]]
temp = [[0,0,0],[0,0,0],[0,0,0]]

for i in range(3):
    for j in range(3):
        temp[j][i]=Matris[i][j]

for k in temp:
    for b in k:
        print(b, end = " ")
    print()