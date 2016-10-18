kitaplar=[[45623,"Python","Mustafa","Baser",23],
         [99878,"Linux Ag Servisleri","Mustafa","Baser",26],
         [98938,"Isletim Sistemleri","Ali","Saatci",17],
         [98947,"PHP ve AJAX","Haydar","Tuna",25]]

while 1:
    KitapNo=input("Kitap Adi Giriniz: ")
    if KitapNo not in ["q","Q"]:
        if KitapNo.isnumeric():
            for k in kitaplar:
                if int(KitapNo)==k[0]:
                    print(k[0],"Kitabinin Yazari",k[2],k[3],"Fiyati",k[4],"TL dir.")
                    break
            else:
                print(KitapNo,"Isimli Kitap Arsivde Yok.")
        else:
            print("*** Kitap Numarasi Sayi Degerden Olusmalidir. ***")
    else:
        break