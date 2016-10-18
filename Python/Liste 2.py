komsuiller = ["Kirikkale","Kirsehir","Nevsehir","Kayseri","Sivas","Tokat","Amasya","Corum"]
print("Yozgat ilinin Komsularini Ogrenelim !!! ")
girilen = input("Bir Komsu il Giriniz (Lutfen ilk Harfi Buyuk Giriniz): ")
i = 0
while i < len(komsuiller):
    
    if girilen==komsuiller[i]:
        print("Evet Dogru Cevap Girdiniz.Cevabiniz : ",girilen)
        break
    i = i + 1
else:
        print("Yanlis Cevap Verdiniz.Lutfen Tekrar Deneyiniz !!!")
        
    
    
