sayi = " "
while sayi != "c":
    sayi = input("Bir Sayi Giriniz\n")
    if sayi =="c":
        print("Program Sonlandi.")
        break
    elif int(sayi) < 0:
        print("Tekrar Deneyiniz.")
        continue
    else:
        print("Girdiginiz Sayinin Karekoku: ",int(sayi)**(1/2))
