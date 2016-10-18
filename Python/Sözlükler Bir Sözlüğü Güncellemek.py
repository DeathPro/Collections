musteri={ "Adi ":"Mustafa", "Soyadi ":"Baser", "Tel ":"345678" }
guncel_bilgiler = {"Tel ":"999999","Adres ":"MKU/Egitim" }

#for i in guncel_bilgiler:
#    musteri[i]=guncel_bilgiler[i]
#print(musteri)

#update() fonksiyonu yukardaki for islemindekinin aynisini yapar.Daha pratik tabiki.
musteri.update(guncel_bilgiler) #geriye bi deger dondurmez.update islemini yapar sadece
print(musteri)