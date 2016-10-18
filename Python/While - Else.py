print("Ulkemizin En Guney ili Hangisidir ?")
print("Sadece Iki Sansiniz Var.")
girilen=" "
i = 1
while i <= 2:
    print(i,".Sans")
    girilen = input("Bir il Giriniz: ")
    if girilen == "Hatay" or girilen == "hatay":
        print("Tebrikler ! En Guney ilimiz Hatay dir.")
        break
    i = i + 1
else:
    print("Uzgunum Iki Sansinizida Denediniz ve Kaybettiniz.")

