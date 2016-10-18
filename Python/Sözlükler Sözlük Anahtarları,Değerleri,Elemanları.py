sozluk={ "Adhere":"Yapismak", "Bald":"Kel", "Page":"Sayfa" }
#a=sozluk.keys() # Sozluklerin anahtarlarini bir liste olarak keys() fonksiyonu ile alabiliriz.
#print(a)        # Burada dinamik liste olustu, bu dinamik liste normal listelerdeki gibi iterasyon islemi yapilabilir...
#for i in a:
#    print(i) # her calistirildiginda sozluk icinde sirasi degisiyo ama bu bizim icin onemli degil
#             # onemli olan icindeki verilerdir...

#B=sorted(sozluk.keys()) # burda sirali bi sekilde b ye atadigimizdan hep ayni sekilde olur cunku siralanmistir...
#print(B)

#for i in B:
#    print(i,":",sozluk[i]) # siralanmis bi sekilde sozlukteki tum veriyi bastirdik.


#a=sozluk.values() # values() fonksiyonu sozlukteki anahtarlarin degerlerini bir liste olarak verir.
#print(a)

a=sozluk.items() # sozlugun tum elemanlarini liste olarak dondurur,
print(a)         # listenin elemanlari (anahtar,deger) seklinde bir tuptur.
                 # iterasyonda yapilabilir.
for i in a:
    print(i[0],":",i[1])