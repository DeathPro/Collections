F=open("C:/Users/Death Pro/Desktop/Python Metin Dosyalari/otobus.txt","r+")
Koltuk=[]
Koltuk=F.read()
#Koltuk=Koltuk.strip()
#Koltuk=Koltuk.split()
#Koltuk="".join(Koltuk)
#Koltuk="\n".join(Koltuk)
a=" "
print(Koltuk)
a=input("Istediginiz Koltuk Numarasini Giriniz\n(Cikmak Icin 'X' Yazip Tuslayiniz.):  ")

F.seek(0)

while a!='X':
    b=0
    c=0
    #if a==1:
    #   b=-1
    for i in Koltuk:
         if b==0:
            c=0
         if Koltuk[c]=="*" or Koltuk[c]=="x":
            b=b+1
         if b==int(a) and Koltuk[c]=="x":
            print(c)
            print("\n"+str(b)+" Numarali Koltuk Doludur Lutfen Tekrar Deneyiniz: ")
            a=input("Istediginiz Koltuk Numarasini Giriniz\n(Cikmak Icin 'X' Yazip Tuslayiniz.):  ")
            b=0
            break
            #if a==1:
            #   b=-1
            F.seek(0)
         if a!="X" and Koltuk[c]=="*" and not Koltuk[c]==" ":
            if b==int(a):
               F.seek(c)
               F.write("x")
               break
         #print(b)
         c=c+1
         #print(c)
         if a==1:
            c=0
    a=input("Istediginiz Koltuk Numarasini Giriniz\n(Cikmak Icin 'X' Yazip Tuslayiniz.):  ")

F.seek(0)
k=F.read()
print(k)
F.close()