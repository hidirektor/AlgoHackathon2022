#numbers : 129 218 110 227 120 199 400 371 237

def main():
    numbers = [129,218,110,227,120,199,400,371,237]

    stringText = ""
    for i in range(1,len(numbers)):
        stringText += str(numbers[i])

    stringText = sorted(stringText, reverse=True)

    print("".join(stringText))

main()

