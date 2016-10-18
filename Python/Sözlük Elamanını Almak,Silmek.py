sozluk={ "Adhere":"Yapismak", "Bald":"Kel", "Page":"Sayfa" }

#a=sozluk.get("Page")
#print(a)
#b=sozluk.get("Title")
#print(b)

#a=sozluk.get("Page","Sozlukte Bulunamadi")#if , else  gibi dusun.. ilk arguman sozlukte varsa degeri dondurulur.
#                                          # yoksa ikinci argumandaki dondurulur.ikinci arguman yazilmassa default degerini dondurur --> None
#print(a)
#b=sozluk.get("Title","Sozlukte Bulunamadi")
#print(b)

a=sozluk.pop("Page")#pop fonksiyonu sozlukten elemani silerken degerini de dondurur.
print(a)
print(sozluk)

#del sozluk["Page"] # pop la ayni þey ancak geri bi deger dondurmuyor.
#print(sozluk)
## del ifadesi bir python nesnesini bellekten silmek icin kullanilir
#a="Fatih"
#print(a)
##simdi silelim.
#del a
##print(a) a nin tanimlanmadigi ortaya cikiyor.