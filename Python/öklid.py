#number = int(input("enter the number: "))
#if number % 5 == 0:
#     print (str(number) + ' is divisible by 5')
#
#if number % 2 == 0:
#     print (str(number) + ' is divisible by 2')
#else:
#     print (str(number) + ' is divisible by 2')

#state = input("enter the state")
#if (state == 'Wisconsin'):
#    print('Madison')
#elif(state == 'Colorado'):
#    print('Denver')
#else:
#    print('I do not know that one')
#
#x = int(input("enter an integer: "))
#a = int(input("enter decrease: "))
#while (x > 0):
#    b = x % 2
#    if(b == 0):
#        print(x,"is even")
#    else:
#        print(x,"is odd")
#    x = x - a
#print('blastoff!!')

#a = 1
#while a == 1:
#    word = str(input("enter a word: "))
#    a = len(word)
#    if a >= 5:
#        print(word, " has", a, "letters")
#        a = 1
#    else:
#        print("goodbye")
#        a = 0

a = 10
while a >= 10 and a <= 100:
    print(a, bin(a), hex(a))
    a = a + 1

#low = int(input("enter the lower number: "))
#high = int(input("enter the higher number: "))
#a = low % 2
#b = high - low
#
#print("the even numbers between", low, "and", high,": ")
#if a == 0:
#    while b > 0:
#        print(low)
#        low = low + 2
#        b = b - 2
#else:
#    while b > 0:
#        print(low + 1)
#        low = low + 2
#        b = b - 2


#numberFakeA = number
#numberFakeB = number
#numberFakeC = number
#a = number % 2
#b = number % 3
#c = number % 5
#A = 0
#B = 0
#C = 0
#if(a == 0):
#    while a == 0:
#        A = A + 1
#        numberFakeA = numberFakeA / 2
#        a = numberFakeA % 2
#    while b == 0:
#        B = B + 1
#        numberFakeB = numberFakeB / 3
#        b = numberFakeB % 3
#    while c == 0:
#        C = C + 1
#        numberFakeC = numberFakeC / 3
#        c = numberFakeC % 3
#
#    print("2 over {} x 3 over {} x 5 over {}".format(A, B, C))
#
#if (b == 0):
#    while a == 0:
#        A = A + 1
#        numberFakeA = numberFakeA / 2
#        a = numberFakeA % 2
#    while b == 0:
#        B = B + 1
#        numberFakeB = numberFakeB / 3
#        b = numberFakeB % 3
#    while c == 0:
#        C = C + 1
#        numberFakeC = numberFakeC / 3
#        c = numberFakeC % 3
#    print("2 over {} x 3 over {} x 5 over {}".format(A, B, C))
#
#if (c == 0):
#    while a == 0:
#        A = A + 1
#        numberFakeA = numberFakeA / 2
#        a = numberFakeA % 2
#    while b == 0:
#        B = B + 1
#        numberFakeB = numberFakeB / 3
#        b = numberFakeB % 3
#    while c == 0:
#        C = C + 1
#        numberFakeC = numberFakeC / 3
#        c = numberFakeC % 3
#    print("2 over {} x 3 over {} x 5 over {}".format(A, B, C))


number = int(input("enter a positive integer: "))
i = 0
while i <= number:
    i = i + 1
    if number % i == 0:
        print(i)








    #qlast
#a = int(input("enter the bigger one: "))
#b = int(input("enter the smaller one: "))
#
#while(a > b and b > 0):
#    d = a / b
#    r = a % b
#    # print(a, "=", b, "x", q, "+", r)
#    print("{} = {} x {} + {}".format(int(a), int(b), int(d), int(r)))
#    a = b
#    b = r

