#F=open("C:/Users/Death Pro/Desktop/siir.txt") #open açýyor
#print(F.readline()) #readline tek satir okur.
#F.seek(0) #seek herhangibir yerden baþa aliyor dosya pointerini
#l=F.readline()
#print(l)
#F.close()#Dosyayi kapatir.

#F=open("C:/Users/Death Pro/Desktop/siir.txt")
#print(F.read()) #read tüm dosyayi okur

#s=open("C:/Users/Death Pro/Desktop/siir.txt").read()#Boylelikle bi degiskenede atayabilirsin ....
#print(s)

#F=open("C:/Users/Death Pro/Desktop/siir.txt")
#for l in F:
#    print(l.strip())#strip baþýndaki ve sonundaki boþluklarý alýyor.

F=open("C:/Windows/win.ini")
l=F.readlines()# readlines Dosyanin tum icerigini bir listeye okuyor 
print(l[5])
print(l[6])
print(l[7])
