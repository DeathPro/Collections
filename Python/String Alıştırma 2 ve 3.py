F=open('C:/Users/Death Pro/Desktop/Python Metin Dosyaları/Telefon Rehberi.txt','r+')

# chr(0) null karakterdir. program bosluk olarak gosteriyor..

#Rehber="567%sFatih Baser" % (chr(0))
#Rehber=Rehber.split(chr(0))
#print(Rehber)
#F.read()
#F.seek(0)


Rehber=F.read()
Rehber=Rehber.split(chr(0))
print(Rehber)

a=-2
c=str(input("Aranacak Ismi Giriniz (Buyuk Harflere Duyarlidir.)\nCikmak Icin 'Q' veya 'q' Yazip Enterlayiniz: "))

while c!="q" and c!="Q":
    a=-2
    for i in Rehber:
        a=a+1
    
        if i.find(c)>-1: # find bulamadiginda -1 donduruyor buldugunda -1 dondurmuyor.
            print(Rehber[a]+"\t"+i)   
    else:
        print("Baska Kayit Bulunamadi.")
        c=str(input("Aranacak Ismi Giriniz (Buyuk Harflere Duyarlidir.)\nCikmak Icin 'Q' veya 'q' Yazip Enterlayiniz: "))

    

a=int(input("Bir Rehber Kayiti Girmek Istiyor Musunuz ? (1 veya 0): "))
while a!=0:
     F=open('C:/Users/Death Pro/Desktop/Telefon Rehberi.txt','a')
     c=int(input("Bir Numara Giriniz: "))
     b=input("Bir Isim Giriniz: ")
     F.write("%s"%(chr(0))+str(c)+"%s"%(chr(0))+b+"\n")
     a=int(input("Bir Rehber Kayiti Girmek Istiyor Musunuz ? (1 veya 0): "))

F=open('C:/Users/Death Pro/Desktop/Python Metin Dosyaları/Telefon Rehberi.txt','r+')

F.seek(0)
print(F.read())
F.close()