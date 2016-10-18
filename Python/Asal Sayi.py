
while 1:
    x = input("Bir Sayi Giriniz: ")
    x = int(x)
    i = 2
    if x>1 and x<500:
        while i < x:
            if x%i==0:
                print("Sayi Asal Degil")
                break
            i= i+1
        else:
           print("Tebrikler Sayiniz Asaldir")
           break         
    else:
        print("1 ile 500 arasinda istemistik")
    
