liste = [50,43,987,123,67,84,176,341,674,121,243,305,192,1203]
i = 0
list2 = []


while True:
    i = i+ 1
    for x in liste :
        if i==x:
            list2.append(i)
            break

    if len(list2)==14 :
        break                
            
      
print("listenin küçükten büyüğe sıralaması {}".format(list2))

mintoplam = list2[0] + list2[1] + list2[2] 
print(mintoplam)

print(list2[0],list2[1],list2[2])
