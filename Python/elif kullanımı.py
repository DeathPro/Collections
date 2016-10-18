girilen = input('Odanin Sicakligi Kac Derece ?\n')
girilen = float(girilen)
if girilen < 23:
    print("Oda Soguk Usuyebilirsin")
elif (girilen >=23) and (girilen <=25):
    print("Oda Tam Ideal Sicaklikta")
else:
    print("Oda Sicak Terleyebilirsin")
