r=input("Cemberin Yaricapi: ")
if r.count(".") in [0,1] and r.replace(".","").isnumeric():
    c=2*3.14*float(r)
    print("Cemberin Cevresi =-> %f" % c)
else:
    print("Cemberin Yaricapi Gecerli Bir Deger Degil")
