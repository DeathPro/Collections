girilen = " "
while girilen!=-1:
    girilen = input("Bir Sayi Giriniz.Cikmak Icin -1 Giriniz: ")
    girilen = float(girilen)
    if girilen == -1:
        print("Cikmak Istediniz Gule Gule.")
    else:
        girilen = girilen**(1/2)
        print(girilen)