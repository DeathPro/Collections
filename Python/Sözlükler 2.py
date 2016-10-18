sozluk={}
a=input("E-posta Adresi: ")

while a!="x":
    b=input("Adi: ")
    c=input("Soyadi: ")
    sozluk[a]={b,c}         #[ ] icindekini anahtar olarak aliyor.{ } icindekini deger olarak aliyorrr...
    a=input("E-posta Adresi: ")
    
print(sozluk)