#F=open("C:/Users/Death Pro/Desktop/siir.txt","a") # a argumani sonuna ekler (append)=ilave etmek

#F.write("\n")
#F.write("Bu cagda bu sevda abes dediler\n")
#F.write("Cezasi celikten kafes dediler\n")
#F.write("Ben kime ne yaptim, ne istediler\n")
#F.write("Bana bu cukuru niye kazdilar\n")

#F.close()

#F=open("C:/Users/Death Pro/Desktop/aboneler.txt","w")

#aboneListesi=[
#            [342,"Melike Baser",51],
#            [624,"Ahmet Ariyan",67],
#            [173,"Selim Yildirim",31],
#            [234,"Mustafa Akgun",89],
#            [512,"Aybuke Coban",12]]

#for a in aboneListesi:
#    for i in a:
#        F.write(str(i)+":")
#    F.write("\n")

#F.close()

F=open("C:/Users/Death Pro/Desktop/aboneler.txt")
aboneListesi=[]

for l in F:
    ls=l.strip()
    ll=ls.split(":")
    aboneListesi.append([int(ll[0]),ll[1],int(ll[2])])

print(aboneListesi)



