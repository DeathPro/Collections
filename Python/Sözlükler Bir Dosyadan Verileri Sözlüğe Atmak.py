F=open("C:/Users/Death Pro/Desktop/Python Metin Dosyalari/passwd.txt")
#F=F.readlines()
kullanicilar={}

for l in F: #dosyayi normal olarak actigimda l satir satir okur.readlines() ile dosyyayi acsaydim gene aynisi oluyor.
   # print(l) # ama read() le acsam dosyayi bir cumle olarak ele aliyor.
    ls=l.strip() # on ve son beyaz bosluklardan kurtulalim # ne olur ne olmaz diye yani
    k=ls.split(":")# alanlari ayiralim #cumleyi parcalayip liste yapiyoruz.
    kullanicilar[k[0]]=[ k[1], int(k[2]), int(k[3]), k[4], k[5], k[6]  ]

from pprint import pprint# Onemli degil aslinda sadece sozlugu guzel gorebilmek adina boyle bi islem yaptik
pprint (kullanicilar)    #bunlada yazdirdik...