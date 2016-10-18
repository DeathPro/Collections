sozluk={ ("Adhere","Yapismak"), ("Bald","Kel") } #Anahtar(burada kelime) ve Deger(burada kelimenin anlami) ikilisi
        
def bul(kelime):
    for k in sozluk:
        if k[0]==kelime:
            return k[1]

print(bul("Adhere"))

sozluk={"Adhere":"Yapismak", "Bald":"Kel"  } #Boylede tanimlanabilir ve daha kolay.

a=sozluk["Bald"] # Anahtar degerinide bu sekilde cagiriyoruz.#yazdirmak icin degiskene atadim...
print(a)

print(sozluk)#tekrar yazdirdigimizda sira degisebiliyor sozlukte sira onemli degil, kelime ve deger ikilisi onemlidir.

sozluk["Page"]="Sayfa" #Bir sozluge anahtar-deger ikilisinin eklenmesi.
print(sozluk)

for i in sozluk:
    print(i)#her seferinde sozluk anahtarlarindan birisini alir...