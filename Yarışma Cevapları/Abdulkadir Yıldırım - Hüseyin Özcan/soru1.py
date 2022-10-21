
def usAl(taban,us):

    if taban == "x" or us == "x":
        return 0
    else:
        k= int(taban)**int(us)
        print(k)
        return usAl((input("Taban:")),(input("üs: ")))

print(usAl(0,1))


