#!C:\Program Files\Python35\python.exe

kitaplar=[[45623,"Python","Mustafa","Baser",23],
         [99878,"Linux Ag Servisleri","Mustafa","Baser",26],
         [98938,"Isletim Sistemleri","Ali","Saatci",17],
         [98947,"PHP ve AJAX","Haydar","Tuna",25]]

while 1:
    Fiyat=int(input("Fiyat Giriniz: "))
    if Fiyat not in ["Ç","ç"]:
        for k in kitaplar:
            if Fiyat > k[4]:
                print(k[1],"Kitabinin Yazari",k[2],k[3],"Fiyati",k[4],"TL dir.")
            else:
                print(Fiyat,"Kitap Fiyati Daha Fazla.")
    else:
        break
