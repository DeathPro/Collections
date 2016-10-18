Not = input("Bir Not Giriniz: ")
Not = float(Not)

def harf_notu(x):
    if x <=54:
        print("FF")
    elif x >=55 and x <=59:
        print("FD")
    elif x >=60 and x <=69:
        print("DD")
    elif x >=70 and x <=74:
        print("CC")
    elif x >=75 and x <=79:
        print("CB")
    elif x >=80 and x <=84:
        print("BB")
    elif x >=85 and x <=89:
        print("BA")
    elif x >=90 and x <=100:
        print("AA")

harf_notu(Not)
