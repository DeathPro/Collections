musteriler = []
x  = int(input("Kac Isim Gireceksiniz:"))

i = 0
while i<x:
    musteriler.append(input("Bir Isim Giriniz: "))
    i=i+1
musteriler.sort()
print(musteriler)