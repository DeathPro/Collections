F=open("C:/Users/Death Pro/Desktop/aboneler.txt")
aboneListesi=[]

for l in F:
    ls=l.strip()
    ll=ls.split(":")
    aboneListesi.append([int(ll[0]),ll[1],int(ll[2])])

F.close()

print("\n",aboneListesi)

F=open("C:/Users/Death Pro/Desktop/GuncelListe.txt")

guncelListe=[]

for l in F:
    ls=l.strip()
    ll=ls.split(":")
    guncelListe.append([int(ll[0]),ll[1],int(ll[2]),int(ll[3]),float(ll[4])])
F.close()

print("\n",guncelListe)

AboneNo=int(input("Abone Numarasini Girin: "))
def arama(AboneNo):
    j=0
    a=-1
    k=0 # guncel endeksi abone listesine attiimmm...
    i=0
    for j in aboneListesi:
       a=a+1
       if AboneNo==j[0]:
            print("Abonenin Adi ve Soyadi: ", j[1])
            k=k+1
            guncelListe[a][2]=j[2]
            b=int(input("Guncel Endeksi Girin: "))
            j[2]=b
            guncelListe[a][3]=j[2]-guncelListe[a][2]
            guncelListe[a][4]=guncelListe[a][3]*(1.2)
            break 
    if k==0:
       print("Abone Numarasi Bulunamadi")

  
while AboneNo!=-1:
    arama(AboneNo)
    AboneNo=int(input("Abone Numarasini Girin: "))
i=0

F=open("C:/Users/Death Pro/Desktop/aboneler.txt","w")
for i in aboneListesi:
    F.write(str(i[0])+":"+str(i[1])+":"+str(i[2])+"\n")
F.close()

F=open("C:/Users/Death Pro/Desktop/GuncelListe.txt","w")
i=0
for i in guncelListe:
    F.write(str(i[0])+":"+str(i[1])+":"+str(i[2])+":"+str(i[3])+":"+str(i[4])+"\n")
F.close()

guncelListe.sort()
l=0
print("Abone No  Adi ve Soyadi  Ilk Endeks  Tuketim  Odenecek Tutar\n")
while l<5:
    print(guncelListe[l])
    l=l+1