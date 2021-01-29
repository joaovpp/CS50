while True:
    dollars = float(input("Troco devido: "))
    if dollars > 0:
        break

cents = dollars * 100
result = 0
while cents > 0:
    if (cents >= 25):
        cents = cents - 25
        result = result + 1
    elif (cents >= 10 and cents < 25):
        cents = cents - 10
        result = result + 1
    elif (cents >= 5 and cents < 10):
        cents = cents - 5
        result = result + 1
    elif (cents >= 1 and cents < 5):
        cents = cents - 1
        result = result + 1
    print(cents)

print("Total de moedas:", result)
