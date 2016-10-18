ogrenciler = []
ogrenciler.append([27,"Fatih Baser"])
ogrenciler.append([19,"Dilek Ariyan"])
ogrenciler.append([56,"Selim Yildirim"])
ogrenciler.append([16,"Tugba Tuysuz"])
ogrenciler.append([52,"Mehmet Abayli"])
ogr=ogrenciler[0]
ogrenciler.sort()#siralamadan once ilk listeyi atmistik ogr ye
ogr[0]=45#siralama yaptiktan sonra ogr nin gosterdigi liste degismiyorrrrr
print(ogrenciler[2])#bu yuzden bu cikiyor
#print(ogr[0],"Numarali Ogrencinin Adi:",ogr[1])
#print(ogrenciler[0][0],"Numarali Ogrencinin Adi:",ogrenciler[0][1])
#for i in ogrenciler:
    #print(i[0],"Numarali Ogrencinin Adi:",i[1])