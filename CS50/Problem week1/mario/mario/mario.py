height = 0
while (height < 1 or height > 8):
    height = int(input("Enter height: "))
    break

for i in range(1, height + 1):
    x = height - i
    while (x > 0):
        print(" ", end = '')
        x = x - 1
    y = i
    while y > 0:
        print("#", end='')
        y = y - 1
    print(" ")
