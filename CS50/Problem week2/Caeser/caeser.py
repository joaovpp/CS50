import sys

if (len(sys.argv[1:]) == 0 or len(sys.argv[1:]) > 1):
    print("Usage: ./caesar key\n")
elif (sys.argv[1].isnumeric() == False):
    print("Usage: ./caesar key\n")
else:
    j = int(sys.argv[1]);
    l = 0;
    k = 0;
    c = 0;
    s = input("plaintext: ");
    print("ciphertext: ", end='');
    for i in s:
        if (ord(i) >= 65) and (ord(i) <= 90):
            l = ord(i) % 65;
            c = (j + l) % 26;
            k = chr(65 + c);
            print(k, end='');
        elif (ord(i) >= 97) and (ord(i) <= 122):
            l = ord(i) % 97;
            c = (j + l) % 26;
            k = chr(97 + c);
            print(k, end='');
        else:
            print(i, end='')
    print()
