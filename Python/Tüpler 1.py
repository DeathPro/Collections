#print('''Otobusun kalkis saati %s, varis saati %s dir.
#Mola kalkistan %d saat sonradir.''' % ("12:30","20:00",4))

degerler=("12:30","20:00",4) # tupler normal parantezle belirtilir.Tipki listelere benzerler...

print('''Otobusun kalkis saati %s, varis saati %s dir.
Mola kalkistan %d saat sonradir.''' % degerler)

print(degerler[0])
print(degerler[2])

#degerler[0]="13:00" #Listenin herhangi bir elemanini degistirebiliyorken, tupler degistirilemez.

(kalkis, varis, mola)=("12:30", "20:00", 4) #bir satirda birden fazla tanimlama yapmak istersen tuple yapabilirsin. Normalde oldugu gibi...
print(kalkis)
print(mola*4)
mola=3 #bu degiskene yeni deger atanabilir.Cunku tupun icindeki degerdir..

kalkis, varis, mola="12:30", "20:00", 4 # parantezsizde olur.Yine tup gibi ele alinir.


eposta="mbaser@mail.com"
(kullaniciAdi, alanAdi)=eposta.split("@") #cumle parcalamasinda da kullanilabilir tupler...
print(kullaniciAdi)
print(alanAdi)

