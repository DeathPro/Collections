komsuiller = ["Kirikkale","Kirsehir","Nevsehir","Kayseri","Sivas","Tokat","Amasya","Corum"]
print("Yozgat ilinin Komsularini Ogrenelim !!! ")
girilen = input("Bir Komsu il Giriniz (Lutfen ilk Harfi Buyuk Giriniz): ")


if girilen in komsuiller:
    print("Tebrikler!",girilen,"Yozgat iline Komsudur")
else:
    print("Uzgunum",girilen,"Yozgat iline Komsu Degildir")