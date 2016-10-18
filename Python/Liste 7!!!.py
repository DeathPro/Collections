ogrenciler =[]
ogrenci=[]
i=0
ogrNo=0
soyadi=" "
telNo=0
while 1:
    adi=input("Ogrencinin Adini Giriniz:    ")
    if adi in ["X","x"]:
        print("\nProgram Sonlandirildi\n")
        break
    else:
        
        soyadi=input("Ogrencinin Soyadini Giriniz:  ")
        telNo=int(input("Ogrencinin Telefon Numarasini Giriniz: "))
        ogrNo=ogrNo + 1
        ogrenci=[[soyadi,adi,ogrNo,telNo]]
        ogrenciler=ogrenciler + ogrenci
ogrenciler.sort()
print("Girdiginiz Ogrenciler \n \n")
for n in ogrenciler:
    print(n[2],n[1],n[0],n[3])
        