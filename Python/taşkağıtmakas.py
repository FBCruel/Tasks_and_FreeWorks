import random

print("Taş - Kağıt - Makas oyununa hoş geldiniz\n"
      "5 puana ilk ulaşan oyunu kazanır\n"
      "Oyun boyunca;\nTaş için 1\n"
      "Kağıt için 2\n"
      "Makas için 3'e ve ENTER'a basınız.\n")



choices = {1:"Taş",2:"Kağıt",3:"Makas"}

userPoint = 0
pcPoint = 0
pcChoice = random.randint(1, 3)

while userPoint <= 4 and pcPoint <= 4:

    userChoice = int(input("Seçiminiz:::"))
    print("Bilgisayarın seçimi: ",(choices[pcChoice]))
    print("Sizin seçiminiz: ",(choices[userChoice]))


    if userChoice == pcChoice:
        print("\nBerabere, kimseye puan veremiyoruz")
    elif userChoice == 1 and pcChoice == 2:
        print("\nKaybettiniz, bilgisayar +1 puan...")
        pcPoint = pcPoint + 1
    elif userChoice == 1 and pcChoice == 3:
        print("\nKazandınız, size +1 puan...")
        userPoint = userPoint + 1
    elif userChoice == 2 and pcChoice == 1:
        print("\nKazandınız, size +1 puan...")
        userPoint = userPoint + 1
    elif userChoice == 2 and pcChoice == 3:
        print("\nKaybettiniz, bilgisayara +1 puan...")
        pcPoint = pcPoint + 1
    elif userChoice == 3 and pcChoice == 1:
        print("\nKaybettiniz, bilgisayara +1 puan...")
        pcPoint = pcPoint + 1
    elif userChoice == 3 and pcChoice == 2:
        print("\nKazandınız, size +1 puan...")
        userPoint = userPoint + 1
    else:
        print("\nYanlış işlem girdiniz\n"
              "Geçerli bir işlem giriniz!!")
    print("Şuanki skor siz {} - bilgisayar {}\n\n".format(userPoint,pcPoint))

if userPoint > pcPoint:
    print("Siz {} ve bilgisayar {}..\nKAZANDINIZ!!".format(userPoint,pcPoint))
elif userPoint < pcPoint:
    print("Siz {} ve bilgisayar {}..\nKAYBETTİNİZ!!".format(userPoint, pcPoint))


