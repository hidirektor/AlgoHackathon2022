yıl = int(input("Yılı girniz: "))

a = yıl/4

if a-int(a) == 0:
    print(f"{int(a*4)} yılı artık yıldır.")

else:
    print(f"{int(a*4)} yılı artık yıl değildir.")
