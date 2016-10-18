sozluk={ "Adhere":"Yapismak", "Bald":"Kel", "Page":"Sayfa" } # bir sozluk listelerdeki gibi baska bir isimle cagirilabilir.takma ad.

kelimeler=sozluk #artik kelimeler nesnesinde yapacagimiz tüm degisiklikler sozluk nesnesinde de yapilmis olur.
kelimeler["Daze"]="Buyulemek, Goz Kamastirmak"
#print(sozluk)

#Bir sozlugun aynisindan istiyorsan copy fonksiyonunu kullanirsin
kopyaSozluk=sozluk.copy()
print(kopyaSozluk)
print("\n\n")
kopyaSozluk.pop("Daze")
print(kopyaSozluk)
print(sozluk)
